// rea decompile_all
// name: FUN_100311948
// address: 0x100311948
// body: available
// range: 0x100311948-0x100311b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100311a88) */

void FUN_100311948(long *param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  
  lVar3 = *(long *)(param_4 + 0x10);
  lVar1 = *(long *)(param_4 + 0x18);
  lVar7 = *(long *)(lVar1 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)&local_80 - uVar6;
  lVar8 = lVar10 - uVar6;
  lVar12 = *(long *)(lVar3 + -8);
  lVar14 = lVar8 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar14 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_5;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar9);
  lVar2 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,param_4);
  if ((int)lVar2 == 1) {
    pcVar13 = *(code **)(lVar7 + 0x20);
    (*pcVar13)(lVar8,lVar9,lVar1);
    (**(code **)(lVar7 + 0x10))(lVar10,lVar8,lVar1);
    uVar11 = *(undefined8 *)(param_4 + 0x20);
    lVar3 = lVar10;
    __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar10,lVar1,uVar11);
    if (lVar3 == 0) {
      lVar3 = lVar1;
      _swift_allocError(lVar1,uVar11,0,0);
      (*pcVar13)(uVar11,lVar10,lVar1);
      pcVar13 = *(code **)(lVar7 + 8);
    }
    else {
      pcVar13 = *(code **)(lVar7 + 8);
      (*pcVar13)(lVar10,lVar1);
    }
    (*pcVar13)(lVar8,lVar1);
    *param_1 = lVar3;
    puVar4 = &DAT_100a82488;
    FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
    uVar11 = 0;
    __ss6ResultOMa(0,local_70,puVar4,PTR___ss5ErrorWS_100995c48);
    uVar5 = 1;
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar14,lVar9,lVar3);
    (*local_78)(param_1,lVar14);
    (**(code **)(lVar12 + 8))(lVar14,lVar3);
    puVar4 = &DAT_100a82488;
    FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
    uVar11 = 0;
    __ss6ResultOMa(0,local_70,puVar4,PTR___ss5ErrorWS_100995c48);
    uVar5 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar11,uVar5);
  return;
}

