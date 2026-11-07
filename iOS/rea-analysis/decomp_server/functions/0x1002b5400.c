// rea decompile_all
// name: FUN_1002b5400
// address: 0x1002b5400
// body: available
// range: 0x1002b5400-0x1002b554b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002b5400(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    uVar6 = param_2[1];
    if (uVar6 >> 0x3c < 0xf) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1[1] = uVar6;
      FUN_100006cdc(uVar1);
      goto LAB_1002b5468;
    }
    FUN_100008d0c(param_1);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
LAB_1002b5468:
  lVar7 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar3 = (long)param_1 + lVar7;
  (*pcVar9)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar9)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
      return param_1;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar2);
    return param_1;
  }
  puVar5 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  return param_1;
}

