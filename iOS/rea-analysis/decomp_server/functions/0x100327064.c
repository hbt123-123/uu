// rea decompile_all
// name: FUN_100327064
// address: 0x100327064
// body: available
// range: 0x100327064-0x100327193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100327064(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar1 = 0;
  local_78 = param_6;
  uStack_70 = param_4;
  local_68 = param_1;
  __sScS12ContinuationV15BufferingPolicyOMa(0,param_10);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3,lVar1);
  puVar2 = &DAT_1009b1a58;
  _swift_allocObject(&DAT_1009b1a58,0x20,7);
  puVar2[0x10] = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  puVar3 = &DAT_1009b1a80;
  _swift_allocObject(&DAT_1009b1a80,0x50,7);
  *(undefined8 *)(puVar3 + 0x10) = param_9;
  *(undefined8 *)(puVar3 + 0x18) = param_10;
  *(undefined8 *)(puVar3 + 0x20) = param_11;
  *(undefined8 *)(puVar3 + 0x28) = param_12;
  *(undefined8 *)(puVar3 + 0x30) = local_78;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = uStack_70;
  *(undefined8 *)(puVar3 + 0x48) = param_5;
  _swift_retain(param_8);
  _swift_retain(param_7);
  _swift_retain(param_5);
  FUN_10031f3b4(local_68,auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),thunk_FUN_10032b408,
                puVar2,FUN_10032c5e4,puVar3,param_10);
  return;
}

