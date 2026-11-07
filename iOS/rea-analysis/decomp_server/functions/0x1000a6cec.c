// rea decompile_all
// name: FUN_1000a6cec
// address: 0x1000a6cec
// body: available
// range: 0x1000a6cec-0x1000a6ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000a6cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  int local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  puVar3 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 8;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  *(undefined8 *)(puVar3 + 0x20) = 0x772d656d616e6572;
  *(undefined8 *)(puVar3 + 0x28) = 0xed0000776f646e69;
  *(undefined8 *)(puVar3 + 0x30) = 0x742d;
  *(undefined8 *)(puVar3 + 0x38) = 0xe200000000000000;
  *(undefined8 *)(puVar3 + 0x40) = param_1;
  *(undefined8 *)(puVar3 + 0x48) = param_2;
  *(undefined8 *)(puVar3 + 0x50) = param_3;
  *(undefined8 *)(puVar3 + 0x58) = param_4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_1000a3308(local_c0,puVar3);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),PTR___sSSN_1009957f8);
  if (local_c0[0] == 0) {
    lVar1 = -0x80;
    lVar2 = -0x70;
  }
  else {
    uVar4 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
    local_140 = param_1;
    uStack_138 = param_2;
    FUN_1003fb4bc(FUN_1000aa018,auStack_150,0xd000000000000094,0x8000000100880950,0xd000000000000025
                  ,0x8000000100880d90,0x1ad,0);
    lVar1 = -0x60;
    lVar2 = -0x50;
  }
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar2) = uStack_b0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar2) = local_b8;
  FUN_1000a9ec8();
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar1) = uStack_a0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar1) = local_a8;
  FUN_1000a9ec8(&stack0xfffffffffffffff0 + lVar1);
  return local_c0[0] == 0;
}

