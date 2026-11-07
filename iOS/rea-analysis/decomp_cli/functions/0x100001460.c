// rea decompile_all
// name: FUN_100001460
// address: 0x100001460
// body: available
// range: 0x100001460-0x10000185b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100001460(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar3 = 0xe400000000000000;
  uVar2 = 0x6f686365;
  pcVar4 = (char *)(param_1 & 0xff);
  pbVar5 = &switchD_100001488::switchdataD_1000cb5b0;
  switch(pcVar4) {
  case (char *)0x1:
  case (char *)0x24:
  case (char *)0x3a:
    uVar3 = 0x6e6f;
  case (char *)0x9d:
    uVar3 = uVar3 & 0xffffffffffff | 0xea00000000000000;
  case (char *)0xb4:
    uVar2 = 0x56746567;
  case (char *)0xb7:
    uVar2 = uVar2 | 0x6973726500000000;
  case (char *)0xaf:
    auVar6._8_8_ = uVar3;
    auVar6._0_8_ = uVar2;
    return auVar6;
  case (char *)0x2:
    uVar3 = 0x6974736f;
  case (char *)0x25:
    auVar12._8_8_ = uVar3 & 0xffffffffffff | 0xee00736300000000;
    auVar12._0_8_ = 0x6e67616944746567;
    return auVar12;
  case (char *)0x3:
    uVar3 = 0xeb000000006f666e;
  case (char *)0x26:
    auVar14._8_8_ = uVar3;
    auVar14._0_8_ = 0x4972657355746567;
    return auVar14;
  case (char *)0x4:
  case (char *)0xb3:
    uVar2 = 0xd000000000000010;
  case (char *)0xb2:
    pcVar4 = "getWalletBalance";
  case (char *)0x27:
  case (char *)0xb6:
    break;
  case (char *)0x5:
    uVar3 = 0x73694c65;
  case (char *)0x37:
    uVar3 = uVar3 | 0x7400000000;
LAB_1000016e4:
    uVar3 = uVar3 & 0xffffffffffff | 0xed00000000000000;
switchD_100001488_caseD_38:
    auVar20._8_8_ = uVar3;
    auVar20._0_8_ = 0x6369766544746567;
    return auVar20;
  case (char *)0x6:
    uVar3 = 0x6f666e4965;
    goto LAB_1000016e4;
  case (char *)0x7:
    pcVar1 = "getDeviceConnectionStatus";
    pcVar4 = (char *)0x9;
    goto LAB_10000162c;
  case (char *)0x8:
    auVar23._8_8_ = 0xed00006563697665;
    auVar23._0_8_ = 0x447463656e6e6f63;
    return auVar23;
  case (char *)0x9:
    uVar2 = 0xd000000000000010;
  case (char *)0x2f:
    pcVar4 = "disconnectDevice";
    break;
  case (char *)0xa:
    uVar3 = 0x7473694c4350;
    goto LAB_10000172c;
  case (char *)0xb:
  case (char *)0xa6:
    uVar3 = 0x6e494350;
  default:
    uVar3 = uVar3 | 0x6f6600000000;
LAB_10000172c:
    uVar3 = uVar3 & 0xffffffffffff | 0xee00000000000000;
    uVar2 = 0x64756f6c43746567;
switchD_100001488_caseD_29:
    auVar22._8_8_ = uVar3;
    auVar22._0_8_ = uVar2;
    return auVar22;
  case (char *)0xc:
    pcVar1 = "getCloudPCConnectionStatus";
    pcVar4 = (char *)0xa;
LAB_10000162c:
    uVar3 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    pbVar5 = (byte *)0x10;
switchD_100001488_caseD_2a:
    auVar15._0_8_ = (ulong)pbVar5 | 0xd000000000000000 | (ulong)pcVar4;
    auVar15._8_8_ = uVar3;
    return auVar15;
  case (char *)0xd:
    uVar3 = 0x5064756f;
  case (char *)0x28:
    auVar19._8_8_ = uVar3 & 0xffffffffffff | 0xed00004300000000;
    auVar19._0_8_ = 0x6c4368636e75616c;
    return auVar19;
  case (char *)0xe:
  case (char *)0xa2:
    uVar3 = 0x756f6c43;
  case (char *)0x31:
  case (char *)0xab:
    uVar3 = uVar3 & 0xffffffffffff | 0xef43506400000000;
  case (char *)0xa0:
    uVar2 = 0x74756873;
  case (char *)0xa4:
    uVar2 = uVar2 | 0x6e776f6400000000;
  case (char *)0xa5:
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = uVar2;
    return auVar8;
  case (char *)0xf:
    uVar3 = 0xee00435064756f6c;
  case (char *)0x32:
    auVar13._8_8_ = uVar3;
    auVar13._0_8_ = 0x437463656e6e6f63;
    return auVar13;
  case (char *)0x10:
    pcVar4 = &UNK_1000c4000;
  case (char *)0xb5:
    pcVar4 = pcVar4 + 0x410;
LAB_100001574:
    auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000011;
    return auVar10;
  case (char *)0x11:
    uVar3 = 0xeb00000000644974;
  case (char *)0x34:
LAB_1000017b0:
    auVar26._8_8_ = uVar3;
    auVar26._0_8_ = 0x6547747369737361;
    return auVar26;
  case (char *)0x12:
    uVar3 = 0xef65646f43746573;
    uVar2 = 0x69737361;
  case (char *)0x30:
    auVar21._0_8_ = uVar2 | 0x6552747300000000;
    auVar21._8_8_ = uVar3;
    return auVar21;
  case (char *)0x13:
    pcVar4 = &UNK_1000c4000;
  case (char *)0x2b:
    auVar27._8_8_ = (ulong)(pcVar4 + 0x420) | 0x8000000000000000;
    auVar27._0_8_ = 0xd000000000000013;
    return auVar27;
  case (char *)0x14:
    auVar17._8_8_ = 0xee00776f6c6c4174;
    auVar17._0_8_ = 0x6553747369737361;
    return auVar17;
  case (char *)0x15:
    auVar18._8_8_ = 0xeb00000000747261;
    auVar18._0_8_ = 0x7453747369737361;
    return auVar18;
  case (char *)0x16:
    uVar3 = 0xef73757461745374;
    goto LAB_1000017b0;
  case (char *)0x17:
    uVar2 = 0xd000000000000010;
    pcVar4 = "termListSessions";
    break;
  case (char *)0x18:
  case (char *)0x2c:
    auVar11._8_8_ = 0xee006e6f69737365;
    auVar11._0_8_ = 0x537361486d726574;
    return auVar11;
  case (char *)0x19:
    pcVar4 = "termRenameSession";
    goto LAB_100001574;
  case (char *)0x1a:
    auVar31._8_8_ = 0xef6e6f6973736553;
    auVar31._0_8_ = 0x6c6c694b6d726574;
    return auVar31;
  case (char *)0x1b:
    uVar3 = 0x654e;
  case (char *)0xa9:
    uVar3 = uVar3 & 0xffffffffffff | 0xeb00000000770000;
  case (char *)0x9e:
LAB_100001810:
    uVar2 = 0x6574;
switchD_100001488_caseD_36:
    auVar29._0_8_ = uVar2 & 0xffffffff0000ffff | 0x6e65704f6d720000;
    auVar29._8_8_ = uVar3;
    return auVar29;
  case (char *)0x1c:
    uVar3 = 0x686361747441;
  case (char *)0x23:
    uVar3 = uVar3 & 0xffffffffffff | 0xee00000000000000;
    goto LAB_100001810;
  case (char *)0x1d:
    auVar30._8_8_ = 0xe600000000000000;
    auVar30._0_8_ = 0x77654e78756d;
    return auVar30;
  case (char *)0x1e:
    pcVar4 = (char *)0x65;
  case (char *)0x35:
    auVar24._8_8_ = ((ulong)pcVar4 | 0xe900000000000000) + 3;
    auVar24._0_8_ = 0x636174744178756d;
    return auVar24;
  case (char *)0x1f:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x73614878756d;
    return auVar16;
  case (char *)0x20:
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6c694b78756d;
  case (char *)0x2d:
    auVar25._0_8_ = uVar2 | 0x6c000000000000;
    auVar25._8_8_ = uVar3;
    return auVar25;
  case (char *)0x21:
    uVar2 = 0x756d;
  case (char *)0xb0:
    uVar2 = uVar2 & 0xffffffff0000ffff | 0x6e6552780000;
  case (char *)0xb1:
    uVar2 = uVar2 | 0x6d61000000000000;
  case (char *)0x2e:
    uVar3 = 0x65;
  case (char *)0xa8:
    auVar9._8_8_ = uVar3 & 0xffffffffffff | 0xe900000000000000;
    auVar9._0_8_ = uVar2;
    return auVar9;
  case (char *)0x22:
  case (char *)0x33:
    uVar3 = 0xe700000000000000;
  case (char *)0xa1:
    uVar2 = 0x4c78756d;
  case (char *)0xff:
    uVar2 = uVar2 | 0x74736900000000;
  case (char *)0x0:
  case (char *)0xae:
    auVar7._8_8_ = uVar3;
    auVar7._0_8_ = uVar2;
    return auVar7;
  case (char *)0x29:
    goto switchD_100001488_caseD_29;
  case (char *)0x2a:
    goto switchD_100001488_caseD_2a;
  case (char *)0x36:
    goto switchD_100001488_caseD_36;
  case (char *)0x38:
    goto switchD_100001488_caseD_38;
  case (char *)0x39:
    break;
  }
  auVar28._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar28._0_8_ = uVar2;
  return auVar28;
}

