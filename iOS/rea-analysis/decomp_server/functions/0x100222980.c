// rea decompile_all
// name: FUN_100222980
// address: 0x100222980
// body: available
// range: 0x100222980-0x100222daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100222980(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  undefined *local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a7e318;
  FUN_100004bb4(&DAT_100a7e318,&DAT_100813488);
  local_b8 = param_1;
  local_a0 = puVar5;
  _swift_beginAccess(&DAT_100a7e308,auStack_78,0,0);
  uVar2 = DAT_100a7e310;
  uVar1 = DAT_100a7e308;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(uVar2);
  ppuVar6 = &local_b8;
  FUN_1002234e0(ppuVar6,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  FUN_10003f094(&local_b8);
  if (((ulong)ppuVar6 & 1) == 0) {
    local_b8 = (undefined *)0x0;
    local_b0 = 0xe000000000000000;
    local_d0 = lVar16;
    lStack_c8 = lVar4;
    local_c0 = lVar13;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd0000000000000a4;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a4,0x80000001008a5e50);
    pcVar12 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar12);
    _swift_bridgeObjectRelease(pcVar12);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_88 = (undefined1 *)0x39;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0x61436f5465766173,0xef293a5f28656863);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_88 = &DAT_d000000000000028;
    uStack_80 = 0x80000001008a5e20;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_88,&local_b8,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar2 = local_b0;
    puVar5 = local_b8;
    uVar1 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_b0);
    }
    else {
      FUN_10021e878(0);
      uVar8 = uVar1;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a5bf0;
      local_d8 = uVar8;
      _swift_allocObject(&DAT_1009a5bf0,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar4;
      *(undefined8 *)(puVar9 + 0x18) = uVar1;
      *(undefined **)(puVar9 + 0x20) = puVar5;
      *(undefined8 *)(puVar9 + 0x28) = uVar2;
      local_98 = FUN_100222dd4;
      local_b8 = PTR___NSConcreteStackBlock_100995490;
      local_b0 = 0x42000000;
      local_a8 = FUN_1000acdb4;
      local_a0 = &DAT_1009a5c08;
      local_90 = puVar9;
      aBlock = __Block_copy(&local_b8);
      puVar5 = local_90;
      _swift_retain(uVar1);
      _swift_release(puVar5);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar11 = &DAT_100a7e2e0;
      FUN_10003f840(&DAT_100a7e2e0,&DAT_100a7e2d8,&DAT_100813640,PTR___sSayxGSTsMc_100995898);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar14,&local_b8,puVar5,puVar11,lVar3,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar15,puVar14,aBlock);
      __Block_release(aBlock);
      FUN_10007ed2c(lVar4,uVar1);
      (**(code **)(local_c0 + 8))(puVar14,lVar3);
      (**(code **)(local_d0 + 8))(lVar15,lStack_c8);
    }
  }
  return;
}

