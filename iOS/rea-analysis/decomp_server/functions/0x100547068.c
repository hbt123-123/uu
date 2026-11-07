// rea decompile_all
// name: FUN_100547068
// address: 0x100547068
// body: available
// range: 0x100547068-0x100547293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100547068(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 auStack_80 [3];
  long local_68;
  undefined8 local_58;
  
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0) {
    uVar1 = 0;
    _swift_getTupleTypeMetadata2(0,param_3,param_4,0,0);
    uVar2 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar1);
    __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
    FUN_100548074();
    if (local_68 == 0) {
      FUN_100040bb4(auStack_80,&DAT_100aaa408,&DAT_1008360c8);
LAB_1005471ac:
      if (*(char *)(unaff_x20 + 0x38) == '\x01') {
        _swift_bridgeObjectRelease(*param_1);
        *param_1 = uVar2;
        return;
      }
      local_b0 = *(undefined8 *)(param_2 + 0x10);
      uStack_98 = *(undefined8 *)(param_2 + 0x18);
      uVar1 = 0;
      uStack_a8 = param_3;
      local_a0 = param_4;
      local_90 = param_5;
      __sSDMa(0,param_3,param_4,param_5);
      __sSD5merge_16uniquingKeysWithySDyxq_Gn_q_q__q_tKXEtKF(uVar2,FUN_1005484e4,auStack_c0,uVar1);
      return;
    }
    _swift_bridgeObjectRelease(uVar2);
    FUN_100040bb4(auStack_80,&DAT_100aaa408,&DAT_1008360c8);
    FUN_100548074();
    if (local_68 == 0) {
      puVar3 = auStack_80;
      FUN_100040bb4(puVar3,&DAT_100aaa408,&DAT_1008360c8);
    }
    else {
      uVar2 = 0;
      __sSDMa(0,param_3,param_4,param_5);
      puVar3 = &local_58;
      _swift_dynamicCast(puVar3,auStack_80,PTR___sypN_100995e88 + 8,uVar2,6);
      uVar2 = local_58;
      if ((int)puVar3 != 0) goto LAB_1005471ac;
    }
    FUN_1005480d0();
    _swift_allocError(&DAT_1009d10f0,puVar3,0,0);
    uVar4 = 0;
  }
  else {
    FUN_1005480d0();
    _swift_allocError(&DAT_1009d10f0,param_1,0,0);
    uVar4 = 1;
    puVar3 = param_1;
  }
  *(undefined1 *)puVar3 = uVar4;
  _swift_willThrow();
  return;
}

