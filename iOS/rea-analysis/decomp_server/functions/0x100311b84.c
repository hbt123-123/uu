// rea decompile_all
// name: FUN_100311b84
// address: 0x100311b84
// body: available
// range: 0x100311b84-0x100311da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100311c64) */

void FUN_100311b84(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined1 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  code *local_70;
  
  lVar4 = *(long *)(param_5 + -8);
  puVar10 = auStack_80 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x18);
  lVar11 = *(long *)(lVar8 + -8);
  lVar9 = (long)puVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar9 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_6;
  local_70 = param_2;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar7);
  lVar5 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,param_4);
  if ((int)lVar5 == 1) {
    (**(code **)(lVar11 + 0x20))(lVar9,lVar7,lVar8);
    (*local_70)(puVar10,lVar9);
    uVar3 = local_78;
    puVar2 = puVar10;
    __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(puVar10,param_5,local_78);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = param_5;
      _swift_allocError(param_5,uVar3,0,0);
      (**(code **)(lVar4 + 0x20))(uVar3,puVar10,param_5);
    }
    else {
      (**(code **)(lVar4 + 8))(puVar10,param_5);
    }
    (**(code **)(lVar11 + 8))(lVar9,lVar8);
    *param_1 = puVar2;
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    puVar1 = &DAT_100a82488;
    FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
    uVar3 = 0;
    __ss6ResultOMa(0,uVar6,puVar1,PTR___ss5ErrorWS_100995c48);
    uVar6 = 1;
  }
  else {
    lVar5 = *(long *)(param_4 + 0x10);
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,lVar7,lVar5);
    puVar1 = &DAT_100a82488;
    FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
    uVar3 = 0;
    __ss6ResultOMa(0,lVar5,puVar1,PTR___ss5ErrorWS_100995c48);
    uVar6 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar3,uVar6);
  return;
}

