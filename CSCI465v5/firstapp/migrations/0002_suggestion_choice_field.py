# -*- coding: utf-8 -*-
# Generated by Django 1.11.5 on 2017-12-04 06:29
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('firstapp', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='suggestion',
            name='choice_field',
            field=models.CharField(choices=[('1', 'Lfg'), ('2', 'LFM'), ('2', 'Wtb'), ('4', 'Wts')], default='1', max_length=3),
        ),
    ]
