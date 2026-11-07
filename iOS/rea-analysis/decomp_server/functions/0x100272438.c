// rea decompile_all
// name: FUN_100272438
// address: 0x100272438
// body: available
// range: 0x100272438-0x100272557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100272438(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar5);
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar7 = *(long *)(lVar1 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar2 = (long)param_1 + lVar6;
  (*pcVar8)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar1);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar1);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar1);
    return param_1;
  }
  puVar4 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}

