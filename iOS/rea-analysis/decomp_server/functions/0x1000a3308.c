// rea decompile_all
// name: FUN_1000a3308
// address: 0x1000a3308
// body: available
// range: 0x1000a3308-0x1000a3487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a3308(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  puVar3 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 8;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  *(undefined8 *)(puVar3 + 0x20) = 0x532d;
  *(undefined8 *)(puVar3 + 0x28) = 0xe200000000000000;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(puVar3 + 0x38) = uVar1;
  *(undefined8 *)(puVar3 + 0x40) = 0x662d;
  *(undefined8 *)(puVar3 + 0x48) = 0xe200000000000000;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar3 + 0x58) = uVar2;
  local_70 = puVar3;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(param_2);
  FUN_10005f920();
  puVar3 = local_70;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ
            (&local_70,*(undefined8 *)(unaff_x20 + 0x18));
  if (((ulong)local_70 & 0x100) == 0) {
    FUN_1000a7cf4(&local_70,puVar3);
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&local_70,FUN_1000a9efc,auStack_a0,&DAT_10099a388);
    _swift_bridgeObjectRelease(puVar3);
  }
  *param_1 = local_70._0_4_;
  *(undefined8 *)(param_1 + 2) = local_68;
  *(undefined8 *)(param_1 + 4) = uStack_60;
  *(undefined8 *)(param_1 + 6) = local_58;
  *(undefined8 *)(param_1 + 8) = uStack_50;
  *(undefined1 *)(param_1 + 10) = local_48;
  return;
}

