// rea decompile_all
// name: FUN_10060f8ac
// address: 0x10060f8ac
// body: available
// range: 0x10060f8ac-0x10060fcff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10060f8ac(ID param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID *pIVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ID IVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ID IVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long local_d0;
  ID local_c8 [3];
  undefined8 local_b0;
  long lStack_a8;
  ID local_a0;
  ID local_98;
  byte local_90;
  byte bStack_8f;
  byte bStack_8e;
  byte bStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  byte bStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char local_70;
  
  lVar2 = 0;
  __s10Foundation10CocoaErrorV4CodeVMa();
  local_d0 = *(long *)(lVar2 + -8);
  uVar12 = (long)local_c8 + (-8 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar16 = *(long *)(lVar3 + -8);
  uVar13 = uVar12 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_1 - 8);
  IVar14 = uVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x10))(IVar14);
  IVar9 = IVar14;
  __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(IVar14,param_1,param_2);
  if (IVar9 == 0) {
    IVar9 = param_1;
    _swift_allocError(param_1,param_2,0,0);
    (**(code **)(lVar15 + 0x20))(param_2,IVar14,param_1);
  }
  else {
    (**(code **)(lVar15 + 8))(IVar14,param_1);
  }
  _swift_willThrow();
  local_c8[0] = IVar9;
  _swift_errorRetain(IVar9);
  puVar4 = &DAT_100aaffb8;
  FUN_100004bb4(&DAT_100aaffb8,&DAT_100848630);
  pIVar5 = &local_98;
  _swift_dynamicCast(pIVar5,local_c8,puVar4,&DAT_1009df040,0);
  if ((int)pIVar5 != 0) {
    if ((local_70 != '\x02') || (local_98 != 3)) {
LAB_10060fa40:
      FUN_10060fd44(&local_98);
      goto LAB_10060fa48;
    }
    local_90 = local_90 | (byte)uStack_80;
    bStack_8f = bStack_8f | (byte)((ulong)uStack_80 >> 8);
    bStack_8e = bStack_8e | (byte)((ulong)uStack_80 >> 0x10);
    bStack_8d = bStack_8d | (byte)((ulong)uStack_80 >> 0x18);
    bStack_8c = bStack_8c | (byte)((ulong)uStack_80 >> 0x20);
    bStack_8b = bStack_8b | (byte)((ulong)uStack_80 >> 0x28);
    bStack_8a = bStack_8a | (byte)((ulong)uStack_80 >> 0x30);
    bStack_89 = bStack_89 | (byte)((ulong)uStack_80 >> 0x38);
    bStack_88 = bStack_88 | (byte)uStack_78;
    bStack_87 = bStack_87 | (byte)((ulong)uStack_78 >> 8);
    bStack_86 = bStack_86 | (byte)((ulong)uStack_78 >> 0x10);
    bStack_85 = bStack_85 | (byte)((ulong)uStack_78 >> 0x18);
    bStack_84 = bStack_84 | (byte)((ulong)uStack_78 >> 0x20);
    bStack_83 = bStack_83 | (byte)((ulong)uStack_78 >> 0x28);
    bStack_82 = bStack_82 | (byte)((ulong)uStack_78 >> 0x30);
    bStack_81 = bStack_81 | (byte)((ulong)uStack_78 >> 0x38);
    auVar17[1] = bStack_8f;
    auVar17[0] = local_90;
    auVar17[2] = bStack_8e;
    auVar17[3] = bStack_8d;
    auVar17[4] = bStack_8c;
    auVar17[5] = bStack_8b;
    auVar17[6] = bStack_8a;
    auVar17[7] = bStack_89;
    auVar17[8] = bStack_88;
    auVar17[9] = bStack_87;
    auVar17[10] = bStack_86;
    auVar17[0xb] = bStack_85;
    auVar17[0xc] = bStack_84;
    auVar17[0xd] = bStack_83;
    auVar17[0xe] = bStack_82;
    auVar17[0xf] = bStack_81;
    auVar1[1] = bStack_8f;
    auVar1[0] = local_90;
    auVar1[2] = bStack_8e;
    auVar1[3] = bStack_8d;
    auVar1[4] = bStack_8c;
    auVar1[5] = bStack_8b;
    auVar1[6] = bStack_8a;
    auVar1[7] = bStack_89;
    auVar1[8] = bStack_88;
    auVar1[9] = bStack_87;
    auVar1[10] = bStack_86;
    auVar1[0xb] = bStack_85;
    auVar1[0xc] = bStack_84;
    auVar1[0xd] = bStack_83;
    auVar1[0xe] = bStack_82;
    auVar1[0xf] = bStack_81;
    auVar17 = NEON_ext(auVar17,auVar1,8,1);
    if (CONCAT17(bStack_89 | auVar17[7],
                 CONCAT16(bStack_8a | auVar17[6],
                          CONCAT15(bStack_8b | auVar17[5],
                                   CONCAT14(bStack_8c | auVar17[4],
                                            CONCAT13(bStack_8d | auVar17[3],
                                                     CONCAT12(bStack_8e | auVar17[2],
                                                              CONCAT11(bStack_8f | auVar17[1],
                                                                       local_90 | auVar17[0])))))))
        != 0) goto LAB_10060fa40;
    _swift_errorRelease(IVar9);
    IVar9 = local_c8[0];
    goto LAB_10060fbb0;
  }
LAB_10060fa48:
  _swift_errorRelease(local_c8[0]);
  local_a0 = IVar9;
  _swift_errorRetain(IVar9);
  puVar6 = &DAT_100ab0330;
  FUN_100004bb4(&DAT_100ab0330,&DAT_100848698);
  pIVar5 = &local_98;
  _swift_dynamicCast(pIVar5,&local_a0,puVar4,puVar6,8);
  if ((int)pIVar5 != 0) {
    _swift_errorRelease(IVar9);
    FUN_1000a0074(&local_98,local_c8);
    FUN_10003f030(local_c8,local_b0);
    (**(code **)(lStack_a8 + 0x10))(local_b0,lStack_a8);
    uVar11 = (uint)local_b0;
    FUN_10003f094(local_c8);
    _swift_errorRelease(local_a0);
    goto LAB_10060fbb8;
  }
  _swift_errorRelease(local_a0);
  _swift_errorRetain(IVar9);
  __s10Foundation8URLErrorV9cancelledAC4CodeVvgZ(uVar13);
  puVar6 = &DAT_100ab0338;
  FUN_100005c90(&DAT_100ab0338,PTR___s10Foundation8URLErrorV4CodeVMa_1009962c8,
                PTR___s10Foundation8URLErrorV4CodeVAA06_ErrorC8ProtocolAAMc_1009962c0);
  uVar7 = uVar13;
  __s10Foundation18_ErrorCodeProtocolPAAE2teoiySbx_s0B0_ptFZ(uVar13,IVar9,lVar3,puVar6);
  _swift_errorRelease(IVar9);
  (**(code **)(lVar16 + 8))(uVar13,lVar3);
  if ((uVar7 & 1) == 0) {
    _swift_errorRetain(IVar9);
    __s10Foundation10CocoaErrorV13userCancelledAC4CodeVvgZ(uVar12);
    puVar6 = &DAT_100ab0340;
    FUN_100005c90(&DAT_100ab0340,PTR___s10Foundation10CocoaErrorV4CodeVMa_1009960b8,
                  PTR___s10Foundation10CocoaErrorV4CodeVAA01_cD8ProtocolAAMc_1009960b0);
    uVar13 = uVar12;
    __s10Foundation18_ErrorCodeProtocolPAAE2teoiySbx_s0B0_ptFZ(uVar12,IVar9,lVar2,puVar6);
    _swift_errorRelease(IVar9);
    (**(code **)(local_d0 + 8))(uVar12,lVar2);
    if ((uVar13 & 1) == 0) {
      local_98 = IVar9;
      _swift_errorRetain(IVar9);
      uVar8 = 0;
      FUN_10060fd00(0);
      pIVar5 = local_c8;
      _swift_dynamicCast(pIVar5,&local_98,puVar4,uVar8,0);
      if ((int)pIVar5 == 0) {
        _swift_errorRelease(local_98);
        _swift_errorRelease(IVar9);
        uVar11 = 0;
        goto LAB_10060fbb8;
      }
      uVar12 = 0x44726f7272454b53;
      _swift_errorRelease(IVar9);
      IVar9 = local_c8[0];
      pcVar10 = "domain";
      IVar14 = _objc_msgSend(local_c8[0],"domain");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      IVar9 = _objc_msgSend(IVar9,"code");
      if ((IVar14 == 0x44726f7272454b53) && (pcVar10 == (char *)0xed00006e69616d6f)) {
        _swift_bridgeObjectRelease(0xed00006e69616d6f);
LAB_10060fcec:
        uVar11 = (uint)(IVar9 == 2);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x44726f7272454b53,0xed00006e69616d6f,IVar14,pcVar10,0);
        _swift_bridgeObjectRelease(pcVar10);
        uVar11 = 0;
        if ((uVar12 & 1) != 0) goto LAB_10060fcec;
      }
      _swift_errorRelease(local_98);
      goto LAB_10060fbb8;
    }
  }
LAB_10060fbb0:
  _swift_errorRelease(IVar9);
  uVar11 = 1;
LAB_10060fbb8:
  return uVar11 & 1;
}

