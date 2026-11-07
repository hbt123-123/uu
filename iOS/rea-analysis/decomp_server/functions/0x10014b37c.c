// rea decompile_all
// name: FUN_10014b37c
// address: 0x10014b37c
// body: available
// range: 0x10014b37c-0x10014bb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014b37c(long param_1,undefined8 param_2)

{
  char *pcVar1;
  dispatch_semaphore_t pdVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  dispatch_semaphore_t pdVar8;
  undefined *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  undefined4 uVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_2c0 [16];
  long alStack_2b0 [2];
  long local_2a0;
  undefined8 local_298;
  long local_290;
  long local_288;
  char *local_280;
  long local_278;
  long local_270;
  long local_268;
  undefined8 local_260;
  long local_258;
  char *local_250;
  long local_248;
  long local_240;
  long local_238;
  dispatch_semaphore_t local_230;
  code *local_228;
  code *local_220;
  dispatch_semaphore_t local_218;
  undefined *local_210;
  undefined *local_208;
  undefined8 local_200;
  code *local_1f8;
  undefined *puStack_1f0;
  code *local_1e8;
  undefined *local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  uint local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [192];
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined1 local_80;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_248 = *(long *)(lVar4 + -8);
  local_240 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_248 + 0x40));
  lVar18 = (long)&local_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar21 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar20 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar20 - extraout_x12;
  local_218 = (dispatch_semaphore_t)lVar14;
  _swift_beginAccess(param_1 + 0x10,auStack_1a0,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar6 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
    local_288 = lVar20;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar6 != 0) {
      uVar7 = 0;
      local_2a0 = lVar21;
      local_298 = param_2;
      local_290 = lVar17;
      local_238 = lVar6;
      local_220 = (code *)lVar5;
      FUN_100401b14();
      pcVar16 = s___FileContent____100892950 + 0x10;
      local_250 = "fileContentsRequest";
      local_260 = uVar7;
      FUN_1003fb45c(FUN_10014bb84,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000026,
                    0x8000000100892960,0x65,7);
      lVar17 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
      uStack_1a8 = 0xc000000000000000;
      local_1b0 = 0;
      lVar5 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
      _swift_weakLoadStrong();
      if (lVar5 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)(lVar5 + 0x14);
        _swift_release();
      }
      lVar17 = param_1 + lVar17;
      local_258 = lVar19;
      local_1d0 = uVar15;
      _swift_weakLoadStrong();
      local_268 = lVar18;
      uStack_1cc = 0;
      if (lVar17 != 0) {
        uVar15 = *(undefined4 *)(lVar17 + 0x90);
        _swift_release(lVar17);
        uStack_1cc = uVar15;
      }
      local_1b8 = 0;
      local_1c0 = 0;
      local_1c8 = 4;
      local_270 = lVar4;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar14 + -0x10) = param_1;
      *(undefined4 **)(lVar14 + -8) = &local_1d0;
      pcVar1 = local_250;
      FUN_1003fb45c(FUN_100152678,lVar14 + -0x20,0xd0000000000000b5,
                    (ulong)local_250 | 0x8000000000000000,0xd000000000000026,0x8000000100892960,0x6c
                    ,7);
      local_c8 = CONCAT44(uStack_1cc,local_1d0);
      uStack_c0 = (ulong)local_1c8;
      uStack_b0 = (ulong)local_1b8;
      local_1d8 = 1;
      local_b8 = local_1c0;
      uStack_a0 = uStack_1a8;
      local_a8 = local_1b0;
      local_88 = 0;
      local_80 = 1;
      FUN_100193a8c(auStack_188,&local_c8);
      pdVar8 = _dispatch_semaphore_create(0);
      iVar3 = (int)auStack_188;
      FUN_1001bd708();
      lVar4 = local_2a0;
      local_280 = s___FileContent____100892950 + 0x10;
      local_278 = param_1;
      while (iVar3 != 0) {
        FUN_1003fb45c(thunk_FUN_10014bbb0,0,0xd0000000000000b5,(ulong)pcVar1 | 0x8000000000000000,
                      0xd000000000000026,(ulong)pcVar16 | 0x8000000000000000,0x74,7);
        FUN_100149be8();
        lVar5 = local_288;
        __s8Dispatch0A4TimeV3nowACyFZ(local_288);
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_218,0x3f9eb851eb851eb8,lVar5);
        local_228 = *(code **)(local_290 + 8);
        (*local_228)(lVar5,local_220);
        puVar9 = &DAT_10099edf8;
        _swift_allocObject(&DAT_10099edf8,0x18,7);
        *(dispatch_semaphore_t *)(puVar9 + 0x10) = pdVar8;
        local_1e8 = thunk_FUN_1000a9f7c;
        local_208 = PTR___NSConcreteStackBlock_100995490;
        local_200 = 0x42000000;
        local_1f8 = FUN_1000acdb4;
        puStack_1f0 = &DAT_10099ee10;
        local_1e0 = puVar9;
        pvVar10 = __Block_copy(&local_208);
        local_230 = pdVar8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
        local_210 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar11 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar9 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar12 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        lVar17 = local_240;
        pcVar1 = local_250;
        lVar5 = local_268;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_268,&local_210,puVar9,puVar12,local_240,puVar11);
        pdVar2 = local_218;
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (local_218,lVar4,lVar5,pvVar10);
        __Block_release(pvVar10);
        pcVar16 = local_280;
        (**(code **)(local_248 + 8))(lVar5,lVar17);
        (**(code **)(local_258 + 8))(lVar4,local_270);
        (*local_228)(pdVar2,local_220);
        _swift_release(local_1e0);
        FUN_1003fb45c(thunk_FUN_10014bc08,0,0xd0000000000000b5,(ulong)pcVar1 | 0x8000000000000000,
                      0xd000000000000026,(ulong)pcVar16 | 0x8000000000000000,0x80,7);
        __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
        iVar3 = (int)auStack_188;
        FUN_1001bd708();
      }
      pcVar13 = thunk_FUN_10014bbdc;
      FUN_1003fb45c(thunk_FUN_10014bbdc,0,0xd0000000000000b5,(ulong)pcVar1 | 0x8000000000000000,
                    0xd000000000000026,(ulong)pcVar16 | 0x8000000000000000,0x7a,7);
      FUN_100149be8();
      puVar9 = &DAT_10099ee48;
      local_220 = pcVar13;
      _swift_allocObject(&DAT_10099ee48,0x18,7);
      *(dispatch_semaphore_t *)(puVar9 + 0x10) = pdVar8;
      local_1e8 = FUN_1000a9f7c;
      local_208 = PTR___NSConcreteStackBlock_100995490;
      local_200 = 0x42000000;
      local_1f8 = FUN_1000acdb4;
      puStack_1f0 = &DAT_10099ee60;
      local_1e0 = puVar9;
      pvVar10 = __Block_copy(&local_208);
      local_218 = pdVar8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
      local_210 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar11 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar9 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar12 = &DAT_100a75aa0;
      FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
      lVar17 = local_240;
      lVar5 = local_268;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_268,&local_210,puVar9,puVar12,local_240,puVar11);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar4,lVar5,pvVar10);
      __Block_release(pvVar10);
      (**(code **)(local_248 + 8))(lVar5,lVar17);
      (**(code **)(local_258 + 8))(lVar4,local_270);
      _swift_release(local_1e0);
      pcVar1 = local_250;
      pcVar16 = local_280;
      FUN_1003fb45c(thunk_FUN_10014bc08,0,0xd0000000000000b5,(ulong)local_250 | 0x8000000000000000,
                    0xd000000000000026,(ulong)local_280 | 0x8000000000000000,0x80,7);
      __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
      local_208 = (undefined *)CONCAT71(local_208._1_7_,1);
      FUN_10061630c(&local_208);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar14 + -0x10) = local_278;
      *(undefined4 **)(lVar14 + -8) = &local_1d0;
      FUN_1003fb45c(FUN_100152690,lVar14 + -0x20,0xd0000000000000b5,
                    (ulong)pcVar1 | 0x8000000000000000,0xd000000000000026,
                    (ulong)pcVar16 | 0x8000000000000000,0x84,7);
      FUN_1000914e4(auStack_188);
      _swift_unknownObjectRelease(local_238);
      FUN_100006cdc(local_1b0,uStack_1a8);
    }
  }
  return;
}

