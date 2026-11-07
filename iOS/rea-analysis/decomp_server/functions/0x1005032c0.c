// rea decompile_all
// name: FUN_1005032c0
// address: 0x1005032c0
// body: available
// range: 0x1005032c0-0x10050347b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005032c0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  long local_60;
  
  FUN_10007f314(param_1,auStack_78,&DAT_100aaa288,&DAT_100836090);
  lVar4 = local_60;
  FUN_100040bb4(auStack_78,&DAT_100aaa288,&DAT_100836090);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x20);
    FUN_10003f030(param_3,uVar1);
    (**(code **)(lVar4 + 0x20))(auStack_78,param_2,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,uVar1,lVar4);
    if (unaff_x21 != 0) {
      return;
    }
    FUN_100128b30(auStack_78,param_1,&DAT_100aaa288,&DAT_100836090);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050347c);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_1 + 0x20);
    FUN_1000ce034(param_1,lVar4);
    (**(code **)(lVar5 + 0x28))(param_2,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,lVar4,lVar5);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10007f314(param_1,auStack_78,&DAT_100aaa288,&DAT_100836090);
    puVar3 = auStack_78;
    FUN_100040bb4(puVar3,&DAT_100aaa288,&DAT_100836090);
    if (local_60 == 0) {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
      *puVar3 = 5;
      _swift_willThrow();
    }
  }
  return;
}

