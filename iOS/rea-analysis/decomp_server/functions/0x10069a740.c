// rea decompile_all
// name: FUN_10069a740
// address: 0x10069a740
// body: available
// range: 0x10069a740-0x10069a86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10069a740(undefined8 param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long *local_60;
  undefined4 local_58 [2];
  
  if ((int)param_2 == 3) {
    FUN_10069bb58(&local_68,param_1);
    lVar4 = 1;
    while (local_68 != DAT_100b2c480) {
      FUN_100698904(local_58,local_68,param_3);
      if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
        bVar1 = false;
        goto LAB_10069a7ec;
      }
      lVar3 = local_68;
      FUN_10069a740(local_68,local_58[0],param_3);
      lVar4 = lVar3 + lVar4;
      FUN_10069b24c(&local_68,0);
    }
    bVar1 = true;
LAB_10069a7ec:
    if (local_60 != (long *)0x0) {
      LOAcquire();
      iVar2 = (int)local_60[1];
      *(int *)(local_60 + 1) = iVar2 + -1;
      LORelease();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 0x10))(local_60);
        LOAcquire();
        iVar2 = *(int *)((long)local_60 + 0xc);
        *(int *)((long)local_60 + 0xc) = iVar2 + -1;
        LORelease();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 0x18))(local_60);
        }
      }
    }
    if (!bVar1) {
      return lVar4;
    }
  }
  else {
    lVar4 = 1;
  }
  FUN_10069a5ec(param_1,param_2,param_3);
  return lVar4;
}

