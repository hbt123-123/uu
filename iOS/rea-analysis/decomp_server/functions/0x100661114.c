// rea decompile_all
// name: FUN_100661114
// address: 0x100661114
// body: available
// range: 0x100661114-0x1006612a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100661114(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  long local_88;
  long lStack_80;
  char local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  lVar5 = *(long *)(param_3 + -8);
  puVar1 = auStack_90 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(puVar1,param_2,param_3);
  __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(puVar1,PTR___sSuN_100995a50,param_3,param_4);
  local_68 = puVar1;
  if ((*(long *)(puVar1 + 0x10) == 0) ||
     (-1 < *(long *)(puVar1 + *(long *)(puVar1 + 0x10) * 8 + 0x18))) {
    local_88 = 0;
    lStack_80 = 0;
    local_78 = '\x02';
    local_70 = puVar1;
    FUN_100645d2c();
    puVar1 = local_70;
    cVar6 = local_78;
    lVar4 = lStack_80;
    lVar3 = local_88;
    (**(code **)(lVar5 + 8))(param_2,param_3);
  }
  else {
    FUN_10065fc5c();
    local_88 = 0;
    lStack_80 = 0;
    local_78 = '\x02';
    local_70 = local_68;
    FUN_100645d2c();
    puVar1 = local_70;
    cVar6 = local_78;
    lVar4 = lStack_80;
    lVar3 = local_88;
    if (local_78 == '\0') {
      (**(code **)(lVar5 + 8))(param_2,param_3);
      if (lVar3 != 0 || lVar4 != 0) {
        cVar6 = '\0';
        goto LAB_100661278;
      }
    }
    else {
      if (local_78 == '\x01') {
        (**(code **)(lVar5 + 8))(param_2,param_3);
LAB_100661278:
        uVar2 = 1;
        goto LAB_1006611dc;
      }
      lVar7 = *(long *)(local_70 + 0x10);
      (**(code **)(lVar5 + 8))(param_2,param_3);
      if (lVar7 != 0) {
        uVar2 = 1;
        cVar6 = '\x02';
        goto LAB_1006611dc;
      }
    }
  }
  uVar2 = 0;
LAB_1006611dc:
  *param_1 = lVar3;
  param_1[1] = lVar4;
  *(char *)(param_1 + 2) = cVar6;
  param_1[3] = (long)puVar1;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}

