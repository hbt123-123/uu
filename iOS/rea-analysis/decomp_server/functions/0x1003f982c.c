// rea decompile_all
// name: FUN_1003f982c
// address: 0x1003f982c
// body: available
// range: 0x1003f982c-0x1003f993f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1003f982c(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar5 = (long)*(int *)(param_3 + 0x24);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar5;
  (*pcVar7)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x28))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
      return param_1;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
    return param_1;
  }
  puVar4 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}

