// rea decompile_all
// name: FUN_10011da70
// address: 0x10011da70
// body: available
// range: 0x10011da70-0x10011db9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10011da70(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *in_x12;
  char *in_x13;
  char *in_x14;
  byte *in_x15;
  byte *in_x16;
  byte *in_x17;
  byte *unaff_x20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pbVar2 = (byte *)0xe700000000000000;
  pbVar1 = &DAT_646e616d6d6f63;
  pbVar5 = (byte *)(param_1 & 0xff);
  pbVar8 = &switchD_10011daa0::switchdataD_10080e050;
  pbVar10 = (byte *)(ulong)pbVar5[0x10080e050];
  pbVar9 = (byte *)((long)pbVar10 * 4 + 0x10011daa4);
  uVar7 = (uint)pbVar9;
  pbVar6 = pbVar5;
  switch(pbVar5) {
  default:
    pbVar1 = (byte *)0x6f63;
  case (byte *)0x6a:
  case (byte *)0xaa:
  case (byte *)0xc4:
  case (byte *)0xd2:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffff00000000ffff | 0x6f72746e0000);
  case (byte *)0x4a:
  case (byte *)0x4c:
  case (byte *)0x82:
  case (byte *)0xc2:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffffffff | 0x6c000000000000);
  case (byte *)0x84:
    auVar11._8_8_ = 0xe700000000000000;
    auVar11._0_8_ = pbVar1;
    return auVar11;
  case (byte *)0x2:
    pbVar2 = (byte *)0xe500000000000000;
    pbVar1 = (byte *)0x6873;
  case (byte *)0x3e:
  case (byte *)0x52:
  case (byte *)0x5a:
  case (byte *)0x62:
  case (byte *)0x76:
  case (byte *)0x8a:
  case (byte *)0x92:
  case (byte *)0x9a:
  case (byte *)0xa2:
  case (byte *)0xb6:
  case (byte *)0xca:
    auVar15._0_8_ = (ulong)pbVar1 & 0xffff00000000ffff | 0x7466690000;
    auVar15._8_8_ = pbVar2;
    return auVar15;
  case (byte *)0x3:
  case (byte *)0x8d:
    pbVar2 = (byte *)0xe600000000000000;
    pbVar1 = (byte *)0x706f;
  case (byte *)0x74:
    auVar16._0_8_ = (ulong)pbVar1 & 0xffff00000000ffff | 0x6e6f69740000;
    auVar16._8_8_ = pbVar2;
    return auVar16;
  case (byte *)0x4:
    uVar3 = 0xe800000000000000;
    break;
  case (byte *)0x5:
    pbVar2 = (byte *)0xe800000000000000;
    pbVar1 = (byte *)0x6f4c73706163;
  case (byte *)0x50:
  case (byte *)0x58:
  case (byte *)0x60:
    auVar18._0_8_ = (ulong)pbVar1 & 0xffffffffffff | 0x6b63000000000000;
    auVar18._8_8_ = pbVar2;
    return auVar18;
  case (byte *)0x6:
  case (byte *)0x72:
  case (byte *)0xb2:
  case (byte *)0xda:
    auVar19._8_8_ = 0xe600000000000000;
    auVar19._0_8_ = 0x7265626d756e;
    return auVar19;
  case (byte *)0x7:
    pbVar2 = (byte *)0xe600000000000000;
    pbVar1 = (byte *)0x72657474656c;
  case (byte *)0x64:
    auVar17._8_8_ = pbVar2;
    auVar17._0_8_ = pbVar1;
    return auVar17;
  case (byte *)0x8:
    uVar3 = 0xeb0000000079654b;
    break;
  case (byte *)0x9:
  case (byte *)0x88:
  case (byte *)0x90:
  case (byte *)0x98:
  case (byte *)0xa0:
    auVar14._8_8_ = 0xe600000000000000;
    auVar14._0_8_ = 0x64617079656b;
    return auVar14;
  case (byte *)0xa:
    pbVar2 = (byte *)0xea00000000006e6f;
    pbVar1 = (byte *)0x6976616e;
  case (byte *)0x78:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffff0000ffffffff | 0x616700000000);
  case (byte *)0x3c:
    auVar20._0_8_ = (ulong)pbVar1 & 0xffffffffffff | 0x6974000000000000;
    auVar20._8_8_ = pbVar2;
    return auVar20;
  case (byte *)0xb:
  case (byte *)0xb4:
    pbVar1 = (byte *)0x6465;
  case (byte *)0xf4:
  case (byte *)0xf5:
  case (byte *)0xf6:
  case (byte *)0xf7:
  case (byte *)0xf8:
  case (byte *)0xf9:
  case (byte *)0xfb:
  case (byte *)0xfc:
  case (byte *)0xfe:
  case (byte *)0xff:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffff0000ffff | 0x74690000);
  case (byte *)0xe2:
  case (byte *)0xe3:
  case (byte *)0xe4:
  case (byte *)0xe5:
  case (byte *)0xe6:
  case (byte *)0xe7:
  case (byte *)0xe8:
  case (byte *)0xe9:
  case (byte *)0xea:
  case (byte *)0xeb:
  case (byte *)0xed:
  case (byte *)0xee:
  case (byte *)0xef:
  case (byte *)0xf0:
  case (byte *)0xf1:
  case (byte *)0xf2:
  case (byte *)0xf3:
    auVar12._0_8_ = (ulong)pbVar1 & 0xffffffff | 0x676e6900000000;
    auVar12._8_8_ = 0xe700000000000000;
    return auVar12;
  case (byte *)0xc:
  case (byte *)0x56:
  case (byte *)0xec:
  case (byte *)0xfa:
  case (byte *)0xfd:
    pbVar2 = (byte *)0xe600000000000000;
  case (byte *)0x8e:
    pbVar1 = (byte *)0x7973;
  case (byte *)0x42:
  case (byte *)0x7a:
  case (byte *)0xba:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffff00000000ffff | 0x6c6f626d0000);
  case (byte *)0x0:
    auVar13._8_8_ = pbVar2;
    auVar13._0_8_ = pbVar1;
    return auVar13;
  case (byte *)0x1c:
    FUN_10011d958();
    auVar22._8_8_ = pbVar2;
    auVar22._0_8_ = pbVar1;
    return auVar22;
  case (byte *)0x30:
  case (byte *)0xb9:
    pbVar5 = (byte *)0x6b;
  case (byte *)0x41:
  case (byte *)0x79:
    pbVar5 = (byte *)((ulong)pbVar5 | 0xe900000000000000);
    pbVar8 = (byte *)(ulong)*unaff_x20;
    pbVar9 = pbVar5 + 8;
  case (byte *)0x27:
    pbVar10 = (byte *)0x626b;
  case (byte *)0x23:
    pbVar10 = (byte *)((ulong)pbVar10 | 0x736572705f640000);
    in_x12 = (byte *)0x16;
  case (byte *)0x70:
    in_x12 = (byte *)((ulong)in_x12 & 0xffffffffffff | 0xd000000000000000);
    in_x13 = "remote_clipboard_v2";
  case (byte *)0xf:
    in_x13 = in_x13 + 0x1e0;
  case (byte *)0x15:
  case (byte *)0x35:
    in_x13 = in_x13 + -0x20;
    in_x14 = "remote_clipboard_v2";
  case (byte *)0xd:
  case (byte *)0xe:
  case (byte *)0x71:
  case (byte *)0xb1:
  case (byte *)0xd9:
    in_x13 = (char *)((ulong)in_x13 | 0x8000000000000000);
    in_x14 = (char *)((ulong)(in_x14 + 0x1e0) | 0x8000000000000000);
    in_x15 = in_x12 + 2;
    in_x16 = (byte *)0xea00000000007475;
    in_x17 = (byte *)0x706e695f74786574;
    in_ZR = (int)pbVar8 == 4;
  case (byte *)0x2c:
    if (!(bool)in_ZR) {
      in_x15 = in_x17;
    }
  case (byte *)0x2a:
    if (!(bool)in_ZR) {
      in_x14 = (char *)in_x16;
    }
  case (byte *)0x39:
    in_ZR = (int)pbVar8 == 3;
  case (byte *)0x2e:
    if (!(bool)in_ZR) {
      in_x12 = in_x15;
    }
  case (byte *)0x10:
  case (byte *)0x14:
  case (byte *)0x16:
  case (byte *)0x19:
  case (byte *)0x28:
  case (byte *)0x32:
  case (byte *)0x3a:
    if (!(bool)in_ZR) {
      in_x13 = in_x14;
    }
    in_ZR = (int)pbVar8 == 1;
  case (byte *)0x25:
    in_x14 = (char *)0xeb00000000657361;
    in_x15 = (byte *)0x5f64626b;
  case (byte *)0x22:
  case (byte *)0x40:
    in_x15 = (byte *)((ulong)in_x15 & 0xffff0000ffffffff | 0x657200000000);
  case (byte *)0x11:
    in_x15 = (byte *)((ulong)in_x15 & 0xffffffffffff | 0x656c000000000000);
  case (byte *)0x1e:
  case (byte *)0x33:
    in_x16 = (byte *)0x626b;
  case (byte *)0x12:
  case (byte *)0x1d:
  case (byte *)0x21:
  case (byte *)0x24:
  case (byte *)0x2b:
  case (byte *)0x36:
    in_x16 = (byte *)((ulong)in_x16 & 0xffff | 0x63696c635f640000);
    pbVar6 = pbVar5;
  case (byte *)0x17:
  case (byte *)0x1a:
  case (byte *)0x20:
  case (byte *)0x2d:
  case (byte *)0x38:
    pbVar5 = (byte *)in_x14;
    if (!(bool)in_ZR) {
      pbVar5 = pbVar6;
      in_x15 = in_x16;
    }
  case (byte *)0x13:
  case (byte *)0x1f:
  case (byte *)0x34:
    in_ZR = (int)pbVar8 == 0;
  case (byte *)0x37:
    pbVar6 = pbVar5;
    if (!(bool)in_ZR) {
      pbVar10 = in_x15;
    }
  case (byte *)0x18:
  case (byte *)0x31:
    pbVar5 = pbVar9;
    if (!(bool)in_ZR) {
      pbVar5 = pbVar6;
    }
    uVar7 = (uint)pbVar8;
    in_OV = SBORROW4(uVar7,2);
    in_NG = (int)(uVar7 - 2) < 0;
    in_ZR = uVar7 == 2;
    pbVar2 = in_x12;
    if (uVar7 < 3) {
      pbVar2 = pbVar10;
    }
  case (byte *)0x29:
    if ((bool)in_ZR || in_NG != in_OV) {
      in_x13 = (char *)pbVar5;
    }
    __sSS4hash4intoys6HasherVz_tF(&DAT_646e616d6d6f63,pbVar2,in_x13);
    _swift_bridgeObjectRelease(in_x13);
    auVar23._8_8_ = pbVar2;
    auVar23._0_8_ = in_x13;
    return auVar23;
  case (byte *)0x5e:
  case (byte *)0x66:
  case (byte *)0x96:
  case (byte *)0x9e:
  case (byte *)0xa6:
  case (byte *)0xb0:
  case (byte *)0xce:
    pbVar10 = &BYTE_10080e058;
    in_x12 = (byte *)0x736572705f64626b;
    in_x13 = (char *)0xd000000000000016;
    in_x14 = (char *)0x80000001008761c0;
    in_x15 = (byte *)0x80000001008761e0;
    in_x16 = &DAT_d000000000000018;
    in_x17 = (byte *)0x7475;
  case (byte *)0x8c:
    pbVar1 = (byte *)0x706e695f74786574;
    if (uVar7 != 4) {
      in_x15 = (byte *)((ulong)in_x17 & 0xffffffffffff | 0xea00000000000000);
      in_x16 = pbVar1;
    }
    if (uVar7 != 3) {
      in_x14 = (char *)in_x15;
      in_x13 = (char *)in_x16;
    }
    in_ZR = uVar7 == 1;
    in_x15 = (byte *)0xeb00000000657361;
  case (byte *)0xa4:
    in_x16 = (byte *)0x656c65725f64626b;
    in_x17 = (byte *)0x626b;
  case (byte *)0x54:
    if (!(bool)in_ZR) {
      in_x15 = pbVar8;
      in_x16 = (byte *)((ulong)in_x17 & 0xffff | 0x63696c635f640000);
    }
    if (uVar7 != 0) {
      pbVar10 = in_x15;
      in_x12 = in_x16;
    }
    if (uVar7 < 3) {
      in_x14 = (char *)pbVar10;
      in_x13 = (char *)in_x12;
    }
    *(char **)pbVar5 = in_x13;
    *(char **)(pbVar5 + 8) = in_x14;
    auVar25._8_8_ = 0xe700000000000000;
    auVar25._0_8_ = pbVar1;
    return auVar25;
  case (byte *)0x94:
  case (byte *)0x9c:
    auVar26._1_7_ = 0;
    auVar26[0] = pbVar5[0x10080e050];
    auVar26._8_8_ = 0xe700000000000000;
    return auVar26;
  case (byte *)0xb8:
    pbVar2 = (byte *)0xe700000000000720;
  case (byte *)0x55:
    _swift_initStaticObject(&DAT_646e616d6d6f63,pbVar2);
    __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
    pbVar2 = unaff_x20;
  case (byte *)0xc8:
    unaff_x20 = pbVar1;
  case (byte *)0x95:
  case (byte *)0x9d:
  case (byte *)0xcd:
  case (byte *)0xa5:
    _swift_bridgeObjectRelease();
  case (byte *)0x5d:
  case (byte *)0x65:
    in_CY = (byte *)0x5 < unaff_x20;
    pbVar5 = (byte *)0x6;
  case (byte *)0xc9:
    pbVar1 = unaff_x20;
    if ((bool)in_CY) {
      pbVar1 = pbVar5;
    }
  case (byte *)0x3d:
  case (byte *)0x51:
  case (byte *)0x59:
  case (byte *)0x5f:
  case (byte *)0x61:
  case (byte *)0x67:
  case (byte *)0x75:
  case (byte *)0x89:
  case (byte *)0x91:
  case (byte *)0x97:
  case (byte *)0x99:
  case (byte *)0x9f:
  case (byte *)0xa1:
  case (byte *)0xa7:
  case (byte *)0xb5:
  case (byte *)0xcf:
    auVar28._8_8_ = pbVar2;
    auVar28._0_8_ = pbVar1;
    return auVar28;
  case (byte *)0xcc:
    uVar3 = _DAT_646e616d6d6f63;
    uVar4 = _DAT_646e616d6d6f6b;
    FUN_10011de48(_DAT_646e616d6d6f63,_DAT_646e616d6d6f6b);
    *pbVar5 = (byte)uVar3;
    auVar24._8_8_ = uVar4;
    auVar24._0_8_ = uVar3;
    return auVar24;
  case (byte *)0xd8:
    auVar27._8_8_ = 0xe700000000000000;
    auVar27._0_8_ = &DAT_646e616d6d6f63;
    return auVar27;
  }
  auVar21._8_8_ = uVar3;
  auVar21._0_8_ = 0x6e6f6974636e7566;
  return auVar21;
}

