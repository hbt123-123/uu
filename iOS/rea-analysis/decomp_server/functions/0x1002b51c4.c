// rea decompile_all
// name: FUN_1002b51c4
// address: 0x1002b51c4
// body: available
// range: 0x1002b51c4-0x1002b533f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002b51c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar6 = param_2[1];
  if ((ulong)param_1[1] >> 0x3c < 0xf) {
    if (uVar6 >> 0x3c < 0xf) {
      uVar8 = *param_2;
      FUN_100008184(uVar8,uVar6);
      uVar7 = *param_1;
      uVar1 = param_1[1];
      *param_1 = uVar8;
      param_1[1] = uVar6;
      FUN_100006cdc(uVar7,uVar1);
      goto LAB_1002b525c;
    }
    FUN_100008d0c(param_1);
  }
  else if (uVar6 >> 0x3c < 0xf) {
    uVar7 = *param_2;
    FUN_100008184(uVar7,uVar6);
    *param_1 = uVar7;
    param_1[1] = uVar6;
    goto LAB_1002b525c;
  }
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
LAB_1002b525c:
  lVar9 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar3 = (long)param_1 + lVar9;
  (*pcVar11)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar9;
  (*pcVar11)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar10 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar2);
      return param_1;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar2);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar2);
    return param_1;
  }
  puVar5 = &DAT_100a83428;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  return param_1;
}

