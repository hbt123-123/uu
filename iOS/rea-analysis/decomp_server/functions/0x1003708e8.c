// rea decompile_all
// name: FUN_1003708e8
// address: 0x1003708e8
// body: available
// range: 0x1003708e8-0x100370c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003708e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ID IVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong *puVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  undefined1 *local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  local_a0 = param_1;
  uStack_98 = param_2;
  local_90 = param_3;
  uStack_88 = param_4;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_b0 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(local_b0 + 0x40);
  lVar3 = 0;
  local_b8 = auStack_d0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar15 = (long)(auStack_d0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = lVar15 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar11 = lVar10 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c0 = _TtC10Filepicker17FilepickerManager::queue;
  uVar4 = 0;
  FUN_100361acc();
  local_c8 = uVar4;
  __s10Foundation4UUIDVACycfC(lVar11);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar14 + 8))(lVar11,lVar2);
  local_70 = (undefined *)0xd00000000000001f;
  uStack_68 = 0x80000001008abc40;
  __sSS6appendyySSF(uVar4,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar4 = uStack_68;
  puVar8 = local_70;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a88740;
  FUN_100005c90(&DAT_100a88740,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar6 = &DAT_100a88748;
  FUN_100004bb4(&DAT_100a88748,&DAT_10081c5f0);
  puVar7 = &DAT_100a88750;
  FUN_1000d61d8(&DAT_100a88750,&DAT_100a88748,&DAT_10081c5f0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar15,&local_70,puVar6,puVar7,lVar3,puVar5);
  puVar1 = local_b8;
  (**(code **)(local_b0 + 0x68))
            (local_b8,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_a8);
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar8,uVar4,lVar10,lVar15,puVar1,0);
  *(undefined **)(unaff_x20 + local_c0) = puVar8;
  *(undefined1 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::startRequestsImmediately) = 0;
  puVar7 = (undefined8 *)
           (unaff_x20 + _TtC10Filepicker17FilepickerManager::backgroundCompletionHandler);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::sessionDelegate) = local_a0;
  *(undefined8 *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::filePickerConfig) = uStack_98;
  IVar9 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                    ((ID)&_OBJC_CLASS___NSURLSession,
                     "sessionWithConfiguration:delegate:delegateQueue:",local_90,local_a0,uStack_88)
  ;
  *(ID *)(unaff_x20 + _TtC10Filepicker17FilepickerManager::session) = IVar9;
  FUN_100372bc8();
  IVar9 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
  lVar2 = _TtC10Filepicker17FilepickerManager::sessionDelegate;
  _swift_unknownObjectWeakAssign
            (*(long *)(IVar9 + _TtC10Filepicker17FilepickerManager::sessionDelegate) +
             _TtC10Filepicker25FilePickerSessionDelegate::sessionManager,IVar9);
  puVar12 = *(ulong **)(IVar9 + lVar2);
  puVar5 = &DAT_1009b5368;
  _swift_allocObject(&DAT_1009b5368,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,IVar9);
  pcVar13 = *(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar12) + 0xb0);
  _swift_retain(puVar5);
  (*pcVar13)(thunk_FUN_100372c0c,puVar5);
  _swift_release(puVar5);
  return IVar9;
}

