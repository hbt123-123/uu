// rea decompile_all
// name: FUN_10001236c
// address: 0x10001236c
// body: available
// range: 0x10001236c-0x1000125af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001236c(void)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 uStack_71;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_10008323c();
  *(long *)(unaff_x20 + 0x108) = *(long *)(unaff_x20 + 0x108) + 1;
  FUN_1000125b0();
  FUN_100011c10(0x456e6f6973736573,0xea0000000000646e);
  _swift_beginAccess(unaff_x20 + 200,auStack_58,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined **)(unaff_x20 + 200) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_70,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined **)(unaff_x20 + 0xd0) = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100011e08(0x456e6f6973736573,0xea0000000000646e);
  lVar1 = *(long *)(unaff_x20 + 0xa0) + 1;
  *(long *)(unaff_x20 + 0xa0) = lVar1;
  lVar6 = *(long *)(unaff_x20 + 0xb0);
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_retain(lVar6);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar6);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  }
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  _swift_release(uVar2);
  FUN_10001296c();
  FUN_1000130a4();
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000133f4,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000012,
                0x800000010087afa0,0x16e,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar3 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &DAT_1009975c0;
    _swift_allocObject(&DAT_1009975c0,0x18,7);
    _swift_weakInit(puVar4 + 0x10,uVar2);
    puVar5 = &DAT_100a75b48;
    FUN_100004bb4(&DAT_100a75b48,&DAT_100809bd8);
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&uStack_71,FUN_10003ff5c,puVar4,puVar5);
    _swift_release(puVar4);
  }
  else {
    FUN_10004f940();
  }
  FUN_100013420();
  FUN_10001382c(lVar1);
  FUN_100012258();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}

