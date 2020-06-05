# -*- coding: utf-8 -*-
# Generated by Django 1.11.5 on 2017-12-04 08:49
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('firstapp', '0007_remove_suggestion_choice_field'),
    ]

    operations = [
        migrations.AddField(
            model_name='suggestion',
            name='choice_field',
            field=models.CharField(choices=[('LFG', 'Lfg'), ('LFM', 'Lfm'), ('WTB', 'Wtb'), ('WTS', 'Wts')], default='LFG', max_length=3),
        ),
    ]