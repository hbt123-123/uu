// rea decompile_all
// name: FUN_1007bb194
// address: 0x1007bb194
// body: available
// range: 0x1007bb194-0x1007bb2d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001007bba0c) */
/* WARNING: Removing unreachable block (ram,0x0001007bbb3c) */
/* WARNING: Removing unreachable block (ram,0x0001007bb674) */
/* WARNING: Removing unreachable block (ram,0x0001007bb680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1007bb194(ulong param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  uint uVar2;
  ulong *self;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  ulong *unaff_x21;
  long lVar13;
  ulong *unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_70 [64];
  
  uVar6 = _DAT_d000000000000018;
  puVar7 = (ulong *)&DAT_80000001008da1b0;
  self = (ulong *)&DAT_d000000000000010;
  puVar10 = (ulong *)(param_1 & 0xff);
  puVar5 = self;
  puVar8 = puVar7;
  switch(puVar10) {
  default:
    puVar7 = (ulong *)0x6464;
  case (ulong *)0x34:
  case (ulong *)0x42:
  case (ulong *)0x70:
  case (ulong *)0x7e:
  case (ulong *)0x98:
  case (ulong *)0xa6:
  case (ulong *)0xde:
    puVar7 = (ulong *)((ulong)puVar7 & 0xffff0000ffff | 0xeb00000000720000);
  case (ulong *)0x32:
  case (ulong *)0x6e:
  case (ulong *)0x96:
  case (ulong *)0xbe:
  case (ulong *)0xc0:
  case (ulong *)0xf6:
    self = (ulong *)0x7973;
  case (ulong *)0xec:
  case (ulong *)0xf8:
    self = (ulong *)((ulong)self & 0xffffffffffff | 0x615f6c6f626d0000);
  case (ulong *)0x7:
    auVar14._8_8_ = puVar7;
    auVar14._0_8_ = self;
    return auVar14;
  case (ulong *)0x1:
  case (ulong *)0xca:
    puVar7 = (ulong *)0xe800000000000000;
  case (ulong *)0xc:
  case (ulong *)0x49:
  case (ulong *)0x60:
  case (ulong *)0x85:
    self = (ulong *)0x6966;
  case (ulong *)0x10:
  case (ulong *)0xad:
  case (ulong *)0xe5:
    self = (ulong *)((ulong)self | 0x656c0000);
  case (ulong *)0x66:
  case (ulong *)0x8e:
  case (ulong *)0xb6:
  case (ulong *)0xee:
    self = (ulong *)((ulong)self | 0x616e00000000);
  case (ulong *)0xe:
    auVar15._0_8_ = (ulong)self & 0xffffffffffff | 0x656d000000000000;
    auVar15._8_8_ = puVar7;
    return auVar15;
  case (ulong *)0x2:
  case (ulong *)0xf:
    puVar7 = (ulong *)0xe800000000000000;
  case (ulong *)0x13:
    self = (ulong *)0x7566;
  case (ulong *)0x11:
  case (ulong *)0x30:
    auVar16._0_8_ = (ulong)self & 0xffffffffffff | 0x6e6f6974636e0000;
    auVar16._8_8_ = puVar7;
    return auVar16;
  case (ulong *)0x3:
  case (ulong *)0x15:
    auVar17._8_8_ = 0xe600000000000000;
    auVar17._0_8_ = 0x656c75646f6d;
    return auVar17;
  case (ulong *)0x4:
  case (ulong *)0x26:
  case (ulong *)0x3a:
  case (ulong *)0x62:
  case (ulong *)0x76:
  case (ulong *)0x8a:
  case (ulong *)0x9e:
  case (ulong *)0xb2:
  case (ulong *)0xc6:
  case (ulong *)0xce:
  case (ulong *)0xd6:
  case (ulong *)0xea:
  case (ulong *)0xfe:
    puVar7 = (ulong *)0xe700000000000000;
    self = (ulong *)0x6170;
  case (ulong *)0x14:
    self = (ulong *)((ulong)self | 0x6b630000);
  case (ulong *)0xa0:
    auVar18._0_8_ = (ulong)self & 0xffffffffffff | 0x65676100000000;
    auVar18._8_8_ = puVar7;
    return auVar18;
  case (ulong *)0x5:
    auVar19._8_8_ = 0xea00000000007264;
    auVar19._0_8_ = 0x64615f6567616d69;
    return auVar19;
  case (ulong *)0x6:
    puVar7 = (ulong *)0xe800000000000000;
    self = (ulong *)0x74616c70;
  case (ulong *)0x38:
    auVar20._0_8_ = (ulong)self & 0xffffffffffff | 0x6d726f6600000000;
    auVar20._8_8_ = puVar7;
    return auVar20;
  case (ulong *)0x8:
  case (ulong *)0xd0:
    puVar7 = (ulong *)0xe600000000000000;
    self = (ulong *)0x696c;
  case (ulong *)0x4a:
  case (ulong *)0x86:
  case (ulong *)0xae:
  case (ulong *)0xe6:
    auVar21._0_8_ = (ulong)self | 0x6f6e656e0000;
    auVar21._8_8_ = puVar7;
    return auVar21;
  case (ulong *)0x9:
  case (ulong *)0xc8:
    puVar7 = (ulong *)0xe500000000000000;
    self = (ulong *)0x6f6e6c6f63;
  case (ulong *)0x24:
    auVar22._8_8_ = puVar7;
    auVar22._0_8_ = self;
    return auVar22;
  case (ulong *)0xa:
    auVar23._8_8_ = 0xe600000000000000;
    auVar23._0_8_ = 0x7070615f6e69;
    return auVar23;
  case (ulong *)0xb:
    puVar7 = (ulong *)0x7261;
  case (ulong *)0xb4:
    auVar24._8_8_ = (ulong)puVar7 & 0xffff0000ffff | 0xeb00000000740000;
    auVar24._0_8_ = 0x74735f6b63617473;
    return auVar24;
  case (ulong *)0x16:
  case (ulong *)0x4c:
    goto switchD_1007bb1c8_caseD_16;
  case (ulong *)0x17:
  case (ulong *)0x20:
  case (ulong *)0x4d:
  case (ulong *)0x5a:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (ulong *)0x58:
    *(undefined8 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
  case (ulong *)0xd8:
  case (ulong *)0x56:
    unaff_x19 = (ulong *)(ulong)(byte)*unaff_x20;
    puVar10 = (ulong *)((long)register0x00000008 + 8);
    self = (ulong *)0x0;
  case (ulong *)0x78:
    __ss6HasherV5_seedABSi_tcfC(puVar10,self);
  case (ulong *)0x1f:
    self = unaff_x19;
  case (ulong *)0x18:
  case (ulong *)0x4e:
  case (ulong *)0x57:
    FUN_1007bb194(self);
  case (ulong *)0x54:
    puVar5 = (ulong *)((long)register0x00000008 + 8);
    param_3 = self;
    unaff_x19 = puVar7;
  case (ulong *)0x1a:
  case (ulong *)0x1d:
  case (ulong *)0x50:
    puVar7 = param_3;
  case (ulong *)0x5c:
    param_3 = unaff_x19;
    unaff_x19 = param_3;
  case (ulong *)0x19:
  case (ulong *)0x4f:
    self = unaff_x19;
    __sSS4hash4intoys6HasherVz_tF(puVar5,puVar7,param_3);
    _swift_bridgeObjectRelease(self);
    __ss6HasherV9_finalizeSiyF();
  case (ulong *)0x1b:
  case (ulong *)0x51:
  case (ulong *)0x5b:
    auVar26._8_8_ = puVar7;
    auVar26._0_8_ = self;
    return auVar26;
  case (ulong *)0x1e:
    goto switchD_1007bb1c8_caseD_1e;
  case (ulong *)0x3c:
  case (ulong *)0x64:
  case (ulong *)0xe4:
    _swift_bridgeObjectRelease();
    auVar27._8_8_ = puVar7;
    auVar27._0_8_ = self;
    return auVar27;
  case (ulong *)0x48:
    uVar3 = CONCAT71(uRamd000000000000011,DAT_d000000000000010);
    uVar9 = _DAT_d000000000000018;
    FUN_1007bbe84(uVar3,_DAT_d000000000000018);
    _swift_bridgeObjectRelease(uVar6);
    *(byte *)puVar10 = (byte)uVar3;
    auVar29._8_8_ = uVar9;
    auVar29._0_8_ = uVar6;
    return auVar29;
  case (ulong *)0x53:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  case (ulong *)0xac:
    *(ulong **)((long)register0x00000008 + 0x10) = unaff_x20;
    *(ulong **)((long)register0x00000008 + 0x18) = unaff_x19;
    *(undefined8 **)((long)register0x00000008 + 0x20) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x28) = unaff_x30;
  case (ulong *)0x1c:
    unaff_x21 = (ulong *)(ulong)DAT_d000000000000010;
    unaff_x20 = (ulong *)(ulong)DAT_80000001008da1b0;
    FUN_1007bb194();
    puVar8 = puVar7;
  case (ulong *)0x59:
    self = unaff_x20;
    puVar7 = puVar8;
    FUN_1007bb194();
    in_ZR = unaff_x21 == self;
    unaff_x19 = puVar8;
switchD_1007bb1c8_caseD_65:
    param_3 = self;
    unaff_x20 = puVar7;
    if ((bool)in_ZR && unaff_x19 == puVar7) {
      uVar2 = 1;
      unaff_x20 = unaff_x19;
    }
    else {
switchD_1007bb1c8_caseD_16:
      puVar7 = unaff_x19;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (unaff_x21,unaff_x19,param_3,unaff_x20,0);
      uVar2 = (uint)unaff_x21;
    }
    _swift_bridgeObjectRelease(unaff_x19);
    _swift_bridgeObjectRelease(unaff_x20);
    self = (ulong *)(ulong)(uVar2 & 1);
switchD_1007bb1c8_caseD_1e:
    goto switchD_1007bb1c8_caseD_55;
  case (ulong *)0x55:
  case (ulong *)0x8c:
switchD_1007bb1c8_caseD_55:
    auVar25._8_8_ = puVar7;
    auVar25._0_8_ = self;
    return auVar25;
  case (ulong *)0x65:
  case (ulong *)0x8d:
  case (ulong *)0xb5:
  case (ulong *)0xed:
    goto switchD_1007bb1c8_caseD_65;
  case (ulong *)0x75:
  case (ulong *)0x89:
  case (ulong *)0x9d:
  case (ulong *)0xb1:
  case (ulong *)0xc5:
  case (ulong *)0xcd:
  case (ulong *)0xd5:
  case (ulong *)0xe9:
  case (ulong *)0xfd:
    FUN_1007bb194();
  case (ulong *)0x25:
  case (ulong *)0x39:
  case (ulong *)0x61:
    param_3 = self;
  case (ulong *)0xd1:
  case (ulong *)0xd9:
    unaff_x19 = puVar7;
  case (ulong *)0x79:
  case (ulong *)0xa1:
    self = unaff_x19;
    puVar7 = param_3;
    __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,puVar7,self);
    _swift_bridgeObjectRelease(self);
  case (ulong *)0x3d:
    __ss6HasherV9_finalizeSiyF();
    auVar28._8_8_ = puVar7;
    auVar28._0_8_ = self;
    return auVar28;
  case (ulong *)0x84:
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
  case (ulong *)0x28:
    unaff_x29 = &stack0x00000050;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (ulong *)0x88:
    puVar5 = (ulong *)&DAT_100abcae0;
    FUN_1007b4550();
    unaff_x19 = puVar5;
    unaff_x22 = self;
  case (ulong *)0x3e:
  case (ulong *)0x7a:
  case (ulong *)0xa2:
  case (ulong *)0xd2:
  case (ulong *)0xda:
    unaff_x23 = puVar5[-1];
    unaff_x25 = (long)register0x00000008 - (*(long *)(unaff_x23 + 0x40) + 0xfU & 0xfffffffffffffff0)
    ;
  case (ulong *)0x74:
    _swift_getObjCClassFromMetadata();
    self = unaff_x20;
  case (ulong *)0x29:
  case (ulong *)0x2a:
  case (ulong *)0x2b:
  case (ulong *)0x3f:
  case (ulong *)0x7b:
  case (ulong *)0xa3:
  case (ulong *)0xd3:
  case (ulong *)0xdb:
    _objc_allocWithZone();
    auVar35._0_8_ = _objc_msgSend((ID)self,"init");
    uVar4 = unaff_x22[3];
    uVar1 = unaff_x22[4];
    unaff_x29[-0xd] = unaff_x22;
    FUN_10003f030(unaff_x22,uVar4);
    FUN_1007bbb90();
    puVar10 = (ulong *)&DAT_1009eb2a8;
    lVar13 = unaff_x29[-0xc];
    __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
              (unaff_x25,&DAT_1009eb2a8,&DAT_1009eb2a8,unaff_x22,uVar4,uVar1);
    if (lVar13 == 0) {
      *(undefined1 *)(unaff_x29 + -9) = 0;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setSymbolAddress:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 1;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setFileName:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 2;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setFunction:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 3;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setModule:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 4;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setPackage:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 5;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setImageAddress:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 6;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setPlatform:",puVar11);
      *(undefined1 *)(unaff_x29 + -9) = 7;
      puVar11 = unaff_x29 + -9;
      puVar10 = unaff_x19;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(puVar11);
      if (puVar10 == (ulong *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(puVar10);
      }
      _objc_msgSend(auVar35._0_8_,"setInstructionAddress:",puVar11);
      uVar6 = 0;
      *(undefined1 *)(unaff_x29 + -0xb) = 8;
      FUN_1007bbbd4(0);
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (unaff_x29 + -9,&DAT_1009eb530,unaff_x29 + -0xb,unaff_x19,&DAT_1009eb530,uVar6);
      lVar12 = unaff_x29[-9];
      lVar13 = 0;
      if (lVar12 != 1) {
        lVar13 = lVar12;
      }
      _objc_msgSend(auVar35._0_8_,"setLineNumber:",lVar13);
      FUN_1007bbc18(lVar12);
      *(undefined1 *)(unaff_x29 + -0xb) = 9;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (unaff_x29 + -9,&DAT_1009eb530,unaff_x29 + -0xb,unaff_x19,&DAT_1009eb530,uVar6);
      lVar12 = unaff_x29[-9];
      lVar13 = 0;
      if (lVar12 != 1) {
        lVar13 = lVar12;
      }
      _objc_msgSend(auVar35._0_8_,"setColumnNumber:",lVar13);
      FUN_1007bbc18(lVar12);
      *(undefined1 *)(unaff_x29 + -0xb) = 10;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (unaff_x29 + -9,&DAT_1009eb530,unaff_x29 + -0xb,unaff_x19,&DAT_1009eb530,uVar6);
      lVar12 = unaff_x29[-9];
      lVar13 = 0;
      if (lVar12 != 1) {
        lVar13 = lVar12;
      }
      _objc_msgSend(auVar35._0_8_,"setInApp:",lVar13);
      FUN_1007bbc18(lVar12);
      *(undefined1 *)(unaff_x29 + -0xb) = 0xb;
      __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
                (unaff_x29 + -9,&DAT_1009eb530,unaff_x29 + -0xb,unaff_x19,&DAT_1009eb530,uVar6);
      lVar12 = unaff_x29[-9];
      lVar13 = 0;
      if (lVar12 != 1) {
        lVar13 = lVar12;
      }
      _objc_msgSend(auVar35._0_8_,"setStackStart:",lVar13);
      (**(code **)(unaff_x23 + 8))(unaff_x25,unaff_x19);
      FUN_1007bbc18(lVar12);
      puVar10 = unaff_x19;
    }
    FUN_10003f094(unaff_x29[-0xd]);
    auVar35._8_8_ = puVar10;
    return auVar35;
  case (ulong *)0x9c:
    __ss9CodingKeyPsE11descriptionSSvg();
    auVar34._8_8_ = puVar7;
    auVar34._0_8_ = self;
    return auVar34;
  case (ulong *)0xb0:
    __ss9CodingKeyPsE16debugDescriptionSSvg();
    auVar33._8_8_ = self;
    auVar33._0_8_ = unaff_x19;
    return auVar33;
  case (ulong *)0xc4:
  case (ulong *)0xcc:
  case (ulong *)0xd4:
    _swift_bridgeObjectRelease();
    *(byte *)unaff_x20 = (byte)unaff_x21;
    auVar32._8_8_ = puVar7;
    auVar32._0_8_ = unaff_x19;
    return auVar32;
  case (ulong *)0xe8:
    uVar4 = (ulong)(byte)*unaff_x20;
    FUN_1007bb194(uVar4);
    auVar31._8_8_ = puVar7;
    auVar31._0_8_ = uVar4;
    return auVar31;
  case (ulong *)0xfc:
    unaff_x19 = puVar10;
  case (ulong *)0xc9:
    uVar4 = (ulong)(byte)*unaff_x20;
    FUN_1007bb194();
    *unaff_x19 = uVar4;
    unaff_x19[1] = (ulong)puVar7;
    auVar30._8_8_ = puVar7;
    auVar30._0_8_ = uVar4;
    return auVar30;
  }
}

