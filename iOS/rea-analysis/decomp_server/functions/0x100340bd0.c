// rea decompile_all
// name: FUN_100340bd0
// address: 0x100340bd0
// body: available
// range: 0x100340bd0-0x100340d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_100340bd0(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined *local_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar5 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    (*param_2)(0,lVar5,0);
    param_1 = param_1 + 0x20;
    puVar4 = local_68;
    do {
      FUN_1000b142c(param_1,auStack_b8);
      puVar2 = &DAT_100a84260;
      FUN_100004bb4(&DAT_100a84260,&DAT_10081b1f0);
      uVar3 = param_3;
      FUN_100004bb4(param_3,param_4);
      _swift_dynamicCast(auStack_90,auStack_b8,puVar2,uVar3,7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        (*param_2)(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      (*param_5)(auStack_90,local_68 + uVar1 * 0x28 + 0x20);
      param_1 = param_1 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar4;
}

