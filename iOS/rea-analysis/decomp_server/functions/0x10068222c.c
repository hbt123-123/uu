// rea decompile_all
// name: FUN_10068222c
// address: 0x10068222c
// body: available
// range: 0x10068222c-0x100682333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10068222c(code *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 != 0) {
    FUN_10068c9e8(0,lVar5,0);
    do {
      param_3 = param_3 + 0x20;
      (*param_1)(&local_70,param_3,local_78);
      uVar4 = uStack_68;
      uVar3 = local_70;
      if (unaff_x21 != 0) {
        _swift_release(puVar2);
        return puVar2;
      }
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_10068c9e8(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x28) = uVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar2;
}

