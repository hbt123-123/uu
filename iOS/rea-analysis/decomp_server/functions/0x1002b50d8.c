// rea decompile_all
// name: FUN_1002b50d8
// address: 0x1002b50d8
// body: available
// range: 0x1002b50d8-0x1002b51c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002b50d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = param_2[1];
  if (uVar4 >> 0x3c < 0xf) {
    uVar6 = *param_2;
    FUN_100008184(uVar6,uVar4);
    *param_1 = uVar6;
    param_1[1] = uVar4;
  }
  else {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar5;
  (**(code **)(lVar7 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
  }
  else {
    puVar3 = &DAT_100a83428;
    FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}

