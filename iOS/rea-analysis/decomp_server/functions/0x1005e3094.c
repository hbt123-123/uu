// rea decompile_all
// name: FUN_1005e3094
// address: 0x1005e3094
// body: available
// range: 0x1005e3094-0x1005e3457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005e34d4) */
/* WARNING: Removing unreachable block (ram,0x0001005e34d8) */

undefined1  [16] FUN_1005e3094(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong in_x12;
  ulong in_x13;
  ulong in_x14;
  undefined1 auVar5 [16];
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
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar2 = 0xe700000000000000;
  uVar1 = 0x6e776f6e6b6e75;
  pcVar3 = (char *)(param_1 & 0xff);
  uVar4 = (ulong)(&switchD_1005e30c4::switchdataD_1008408f6)[(long)pcVar3];
  switch(pcVar3) {
  default:
    uVar2 = 0xe400000000000000;
  case (char *)0x29:
  case (char *)0x2b:
  case (char *)0x33:
  case (char *)0x37:
  case (char *)0x43:
  case (char *)0x55:
  case (char *)0x57:
  case (char *)0x6f:
  case (char *)0x71:
  case (char *)0x73:
  case (char *)0x7d:
  case (char *)0x83:
  case (char *)0x89:
  case (char *)0x9b:
  case (char *)0x9d:
    uVar1 = 0x6365;
  case (char *)0x27:
  case (char *)0x2f:
  case (char *)0x3f:
  case (char *)0x47:
  case (char *)0x4d:
  case (char *)0x4f:
  case (char *)0x63:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x79:
  case (char *)0x85:
  case (char *)0x8d:
  case (char *)0x93:
  case (char *)0x95:
  case (char *)0xa9:
  case (char *)0xbc:
  case (char *)0xd7:
  case (char *)0xdb:
    uVar1 = (ulong)((uint)uVar1 & 0xffff | 0x6f680000);
  case (char *)0x31:
  case (char *)0x35:
  case (char *)0x39:
  case (char *)0x49:
  case (char *)0x4b:
  case (char *)0x51:
  case (char *)0x61:
  case (char *)0x65:
  case (char *)0x77:
  case (char *)0x7b:
  case (char *)0x7f:
  case (char *)0x8f:
  case (char *)0x91:
  case (char *)0x97:
  case (char *)0xa7:
  case (char *)0xab:
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = uVar1;
    return auVar5;
  case (char *)0x2:
    uVar2 = 0x657461;
  case (char *)0x54:
    uVar2 = uVar2 & 0xffffffffffff | 0xeb00000000000000;
    uVar1 = 0x74536d6f6f526e6f;
  case (char *)0x48:
  case (char *)0x62:
  case (char *)0x7c:
    auVar13._8_8_ = uVar2;
    auVar13._0_8_ = uVar1;
    return auVar13;
  case (char *)0x3:
  case (char *)0x5c:
  case (char *)0xa8:
    uVar1 = 0xd000000000000015;
  case (char *)0x44:
    pcVar3 = "onPeerConnectionState";
  case (char *)0xa4:
    goto LAB_1005e32e0;
  case (char *)0x4:
    uVar2 = 0x7550;
  case (char *)0x6c:
  case (char *)0x82:
    uVar2 = uVar2 & 0xffffffffffff | 0xec00000068730000;
  case (char *)0x8e:
    uVar1 = 0x6c616e6769536e6f;
  case (char *)0x52:
    auVar10._8_8_ = uVar2;
    auVar10._0_8_ = uVar1;
    return auVar10;
  case (char *)0x5:
    uVar2 = 0x65746174;
  case (char *)0xc8:
    uVar2 = uVar2 & 0xffffffffffff | 0xec00000000000000;
    uVar1 = 0x52746567;
  case (char *)0x4c:
    uVar1 = uVar1 & 0xffff0000ffffffff | 0x6f6f00000000;
  case (char *)0xb8:
  case (char *)0xb9:
  case (char *)0xbe:
  case (char *)0xbf:
    auVar18._0_8_ = uVar1 & 0xffffffffffff | 0x536d000000000000;
    auVar18._8_8_ = uVar2;
    return auVar18;
  case (char *)0x6:
    pcVar3 = 
    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
    ;
  case (char *)0x34:
  case (char *)0x58:
    pcVar3 = pcVar3 + 0x630;
    goto LAB_1005e32f4;
  case (char *)0x7:
    pcVar3 = "getSecondScreenSettings";
  case (char *)0x46:
  case (char *)0xe2:
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  case (char *)0xa0:
    auVar15._8_8_ = uVar2;
    auVar15._0_8_ = 0xd000000000000017;
    return auVar15;
  case (char *)0x8:
    uVar2 = 0x80000001008be650;
  case (char *)0x66:
    auVar24._8_8_ = uVar2;
    auVar24._0_8_ = 0xd000000000000020;
    return auVar24;
  case (char *)0x9:
  case (char *)0x5a:
    pcVar3 = "enCaptureSetting";
  case (char *)0x56:
  case (char *)0xa2:
    auVar11._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar11._0_8_ = 0xd00000000000001d;
    return auVar11;
  case (char *)0xa:
  case (char *)0x8a:
  case (char *)0xa6:
    pcVar3 = 
    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
    ;
  case (char *)0x2e:
    pcVar3 = pcVar3 + 0x6c0;
  case (char *)0x92:
    auVar23._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = 0xd00000000000001b;
    return auVar23;
  case (char *)0xb:
  case (char *)0x26:
    pcVar3 = 
    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
    ;
  case (char *)0xca:
    auVar9._8_8_ = (ulong)(pcVar3 + 0x6c0) | 0x8000000000000000;
    auVar9._0_8_ = 0xd00000000000001a;
    return auVar9;
  case (char *)0xc:
    pcVar3 = "onXPCConnectorOnline";
    break;
  case (char *)0xd:
    uVar1 = 0x15;
  case (char *)0xc1:
  case (char *)0xce:
  case (char *)0xcf:
  case (char *)0xd4:
  case (char *)0xd5:
    uVar1 = uVar1 & 0xffffffffffff | 0xd000000000000000;
    pcVar3 = "onXPCConnectorOffline";
LAB_1005e32e0:
    auVar20._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = uVar1;
    return auVar20;
  case (char *)0xe:
  case (char *)0x98:
    uVar1 = 0xd000000000000015;
  case (char *)0x76:
    pcVar3 = "getXPCConnectorOnline";
    goto LAB_1005e32e0;
  case (char *)0xf:
    uVar2 = 0x7672;
  case (char *)0x7e:
    auVar14._8_8_ = uVar2 & 0xffffffffffff | 0xec00000072650000;
    auVar14._0_8_ = 0x6553746978456e6f;
    return auVar14;
  case (char *)0x10:
    pcVar3 = 
    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
    ;
  case (char *)0xbb:
    pcVar3 = pcVar3 + 0x760;
  case (char *)0x36:
LAB_1005e33c8:
    auVar28._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar28._0_8_ = &DAT_d000000000000018;
    return auVar28;
  case (char *)0x11:
  case (char *)0x38:
    pcVar3 = 
    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Extend/XPCSendable.swift"
    ;
  case (char *)0x5e:
  case (char *)0xf2:
    pcVar3 = pcVar3 + 0x780;
LAB_1005e32f4:
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    uVar1 = 0xd000000000000016;
switchD_1005e30c4_caseD_9a:
    auVar21._8_8_ = uVar2;
    auVar21._0_8_ = uVar1;
    return auVar21;
  case (char *)0x12:
  case (char *)0x42:
    auVar22._8_8_ = 0x80000001008be780;
    auVar22._0_8_ = 0xd00000000000001c;
    return auVar22;
  case (char *)0x13:
    pcVar3 = "openControlledPermission";
    goto LAB_1005e33c8;
  case (char *)0x14:
  case (char *)0x28:
    pcVar3 = (char *)0xe900000000000065;
  case (char *)0xc0:
    uVar2 = (ulong)pcVar3 | 8;
  case (char *)0xd3:
    uVar1 = 0x6c63;
  case (char *)0x9c:
  case (char *)0xfa:
    uVar1 = uVar1 & 0xffff00000000ffff | 0x527261650000;
  case (char *)0x7a:
  case (char *)0xb2:
  case (char *)0xd6:
    auVar17._0_8_ = uVar1 & 0xffffffffffff | 0x6f6f000000000000;
    auVar17._8_8_ = uVar2;
    return auVar17;
  case (char *)0x15:
  case (char *)0xae:
    uVar2 = 0x616d;
  case (char *)0x9e:
    uVar2 = uVar2 | 0x6e690000;
  case (char *)0x8c:
    uVar2 = uVar2 & 0xffffffffffff | 0xec00000000000000;
    uVar1 = 0x7773;
  case (char *)0x40:
    uVar1 = uVar1 & 0xffff00000000ffff | 0x686374690000;
  case (char *)0xc5:
    auVar19._0_8_ = uVar1 & 0xffffffffffff | 0x6f44000000000000;
    auVar19._8_8_ = uVar2;
    return auVar19;
  case (char *)0x16:
    pcVar3 = "clipboardReceiveCopy";
    break;
  case (char *)0x17:
    pcVar3 = "clipboardDragDrop";
    goto LAB_1005e33e8;
  case (char *)0x18:
    pcVar3 = "debugTriggerCrash";
  case (char *)0x68:
LAB_1005e33e8:
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    pcVar3 = (char *)0x15;
switchD_1005e30c4_caseD_64:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
    goto switchD_1005e30c4_caseD_4e;
  case (char *)0x19:
    auVar12._8_8_ = 0xe800000000000000;
    auVar12._0_8_ = 0x796669746e656469;
    return auVar12;
  case (char *)0x1a:
    uVar1 = 0x72616568;
  case (char *)0x50:
    auVar32._0_8_ = uVar1 & 0xffffffff | 0x6165627400000000;
    auVar32._8_8_ = 0xe900000000000074;
    return auVar32;
  case (char *)0x1b:
  case (char *)0x53:
  case (char *)0x59:
  case (char *)0x5d:
  case (char *)0x5f:
  case (char *)0x99:
  case (char *)0x9f:
  case (char *)0xa3:
  case (char *)0xa5:
    uVar2 = 0x5074;
  case (char *)0xd2:
    uVar2 = uVar2 & 0xffffffffffff | 0xed0000676e6f0000;
    uVar1 = 0x6568;
  case (char *)0x78:
    uVar1 = uVar1 & 0xffffffff0000ffff | 0x72610000;
  case (char *)0xb3:
  case (char *)0xe4:
  case (char *)0xec:
  case (char *)0xf4:
  case (char *)0xfc:
    uVar1 = uVar1 & 0xffff0000ffffffff | 0x627400000000;
  case (char *)0x30:
  case (char *)0x72:
    uVar1 = uVar1 & 0xffffffffffff | 0x6165000000000000;
  case (char *)0xe6:
  case (char *)0xee:
  case (char *)0xf6:
  case (char *)0xfe:
    auVar6._8_8_ = uVar2;
    auVar6._0_8_ = uVar1;
    return auVar6;
  case (char *)0x1c:
    uVar2 = 0x64657463656a;
  case (char *)0x88:
  case (char *)0x96:
    uVar2 = uVar2 & 0xffffffffffff | 0xee00000000000000;
    uVar1 = 0x41756f79;
  case (char *)0x32:
    auVar30._0_8_ = uVar1 & 0xffffffff | 0x6552657200000000;
    auVar30._8_8_ = uVar2;
    return auVar30;
  case (char *)0x1d:
  case (char *)0xac:
    uVar2 = 0xe600000000000000;
  case (char *)0x2c:
    uVar1 = 0x756d;
  case (char *)0x94:
    auVar31._0_8_ = uVar1 & 0xffff00000000ffff | 0x77654e780000;
    auVar31._8_8_ = uVar2;
    return auVar31;
  case (char *)0x1e:
    uVar2 = 0xe900000000000068;
    uVar1 = 0x74744178756d;
  case (char *)0x6e:
    uVar1 = uVar1 & 0xffffffffffff | 0x6361000000000000;
  case (char *)0xe3:
  case (char *)0xeb:
  case (char *)0xf3:
  case (char *)0xfb:
    auVar25._8_8_ = uVar2;
    auVar25._0_8_ = uVar1;
    return auVar25;
  case (char *)0x1f:
  case (char *)0xea:
    uVar2 = 0xe600000000000000;
    uVar1 = 0x73614878756d;
  case (char *)0xbd:
    auVar16._8_8_ = uVar2;
    auVar16._0_8_ = uVar1;
    return auVar16;
  case (char *)0x20:
    auVar26._8_8_ = 0xe700000000000000;
    auVar26._0_8_ = 0x6c6c694b78756d;
    return auVar26;
  case (char *)0x21:
  case (char *)0xd1:
    uVar1 = 0x756d;
  case (char *)0xb4:
    auVar8._0_8_ = uVar1 & 0xffff | 0x6d616e6552780000;
    auVar8._8_8_ = 0xe900000000000065;
    return auVar8;
  case (char *)0x22:
  case (char *)0xc9:
    uVar1 = 0x7473694c78756d;
  case (char *)0x0:
    auVar7._8_8_ = 0xe700000000000000;
    auVar7._0_8_ = uVar1;
    return auVar7;
  case (char *)0x2a:
  case (char *)0x3a:
  case (char *)0x86:
    break;
  case (char *)0x4e:
switchD_1005e30c4_caseD_4e:
    auVar29._0_8_ = pcVar3 + -4;
    auVar29._8_8_ = uVar2;
    return auVar29;
  case (char *)0x60:
  case (char *)0xaa:
switchD_1005e30c4_caseD_60:
    auVar27._0_8_ = ((ulong)pcVar3 | 0xd000000000000000) - 1;
    auVar27._8_8_ = uVar2;
    return auVar27;
  case (char *)0x64:
    goto switchD_1005e30c4_caseD_64;
  case (char *)0x70:
    in_ZR = 0;
    uVar4 = 0x496e;
  case (char *)0x80:
    uVar4 = uVar4 | 0xeb00000000440000;
    in_x12 = 0x706f;
  case (char *)0x3e:
    in_x12 = in_x12 & 0xffff | 0x6f69746172650000;
    in_x13 = 0xe800000000000000;
  case (char *)0x90:
    in_x14 = 0x6573;
  case (char *)0x3c:
    in_x14 = in_x14 & 0xffffffff0000ffff | 0x74740000;
  case (char *)0x84:
    if (!(bool)in_ZR) {
      uVar4 = in_x13;
      in_x12 = in_x14 & 0xffffffff | 0x73676e6900000000;
    }
  case (char *)0x4a:
    auVar33._8_8_ = uVar4;
    auVar33._0_8_ = in_x12;
    return auVar33;
  case (char *)0x74:
    goto switchD_1005e30c4_caseD_74;
  case (char *)0x9a:
    goto switchD_1005e30c4_caseD_9a;
  }
  uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
switchD_1005e30c4_caseD_74:
  pcVar3 = (char *)0x15;
  goto switchD_1005e30c4_caseD_60;
}

