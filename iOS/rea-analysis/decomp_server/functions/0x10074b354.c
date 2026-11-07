// rea decompile_all
// name: FUN_10074b354
// address: 0x10074b354
// body: available
// range: 0x10074b354-0x10074b41b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10074b354(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  code *local_370;
  code *local_368;
  
  FUN_10079e6e8(param_1,param_2,0);
  FUN_100769e5c(&local_3a8,100,param_2);
  iVar1 = (int)&local_3a8;
  (*local_370)();
  uVar3 = 0;
  if (iVar1 != 0 && param_4 != 0) {
    uVar3 = 0;
    do {
      if (param_5 == 0) {
LAB_10074b3cc:
        puVar2 = (undefined8 *)(param_3 + uVar3 * 0x28);
        puVar2[1] = uStack_3a0;
        *puVar2 = local_3a8;
        puVar2[3] = uStack_390;
        puVar2[2] = local_398;
        puVar2[4] = local_388;
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      else {
        iVar1 = (int)&local_3a8;
        (*local_368)();
        if (iVar1 != 0) goto LAB_10074b3cc;
      }
      iVar1 = (int)&local_3a8;
      (*local_370)();
    } while (iVar1 != 0 && (int)uVar3 != param_4);
  }
  return uVar3;
}

