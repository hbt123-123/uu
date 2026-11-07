// rea decompile_all
// name: FUN_1005d2b38
// address: 0x1005d2b38
// body: available
// range: 0x1005d2b38-0x1005d2cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005d2c48) */

void FUN_1005d2b38(undefined8 param_1,undefined8 param_2,ulong param_3,code *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 auStack_80 [4];
  
  puVar1 = &DAT_100aadca8;
  auStack_80[1] = param_2;
  auStack_80[2] = param_7;
  FUN_100004c48(&DAT_100aadca8,&DAT_10083f250);
  lVar2 = 0;
  __ss6ResultOMa(0,param_6,puVar1,PTR___ss5ErrorWS_100995c48);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)auStack_80 - extraout_x8);
  lVar5 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar7 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if ((param_3 & 1) == 0) {
    FUN_1005cf5ec(puVar7,param_1,auStack_80[1],0,param_6,auStack_80[2]);
    (**(code **)(lVar5 + 0x10))(puVar6,puVar7,param_6);
    _swift_storeEnumTagMultiPayload(puVar6,lVar2,0);
    (*param_4)(puVar6);
    (**(code **)(lVar4 + 8))(puVar6,lVar2);
    pcVar3 = *(code **)(lVar5 + 8);
  }
  else {
    *puVar6 = param_1;
    _swift_storeEnumTagMultiPayload(puVar6,lVar2,1);
    _swift_errorRetain(param_1);
    (*param_4)(puVar6);
    pcVar3 = *(code **)(lVar4 + 8);
    puVar7 = puVar6;
    param_6 = lVar2;
  }
  (*pcVar3)(puVar7,param_6);
  return;
}

