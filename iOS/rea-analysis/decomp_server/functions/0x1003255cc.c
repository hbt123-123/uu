// rea decompile_all
// name: FUN_1003255cc
// address: 0x1003255cc
// body: available
// range: 0x1003255cc-0x10032570b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003255cc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  uVar1 = 0xff;
  local_68 = param_1;
  FUN_10029ca28(0xff,param_7,param_8,param_9);
  lVar2 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar1);
  lVar6 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            (auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_3,lVar2);
  puVar3 = &DAT_1009b1b70;
  _swift_allocObject(&DAT_1009b1b70,0x20,7);
  puVar3[0x10] = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  puVar4 = &DAT_1009b1b98;
  _swift_allocObject(&DAT_1009b1b98,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  *(undefined8 *)(puVar4 + 0x18) = param_8;
  *(undefined8 *)(puVar4 + 0x20) = param_9;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_5;
  _swift_retain(param_6);
  _swift_retain(param_5);
  uVar5 = 0;
  _swift_checkMetadataState(0,uVar1);
  FUN_10031f3b4(local_68,auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),thunk_FUN_10032af04,
                puVar3,FUN_10032c8cc,puVar4,uVar5);
  return;
}

