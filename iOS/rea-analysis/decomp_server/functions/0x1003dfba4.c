// rea decompile_all
// name: FUN_1003dfba4
// address: 0x1003dfba4
// body: available
// range: 0x1003dfba4-0x1003dfdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003dfba4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 *local_90;
  long lStack_88;
  undefined1 auStack_80 [40];
  undefined8 *local_58;
  
  if (((uint)param_3 >> 8 & 1) == 0) {
    if (param_4 == (code *)0x0) {
      return;
    }
    (*param_4)();
    return;
  }
  if (((uint)param_3 & 0xff) == 6) {
    local_58 = param_1;
    _swift_errorRetain();
    puVar1 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    puVar2 = &DAT_100a8ce40;
    FUN_100004bb4(&DAT_100a8ce40,&DAT_100823350);
    puVar3 = auStack_80;
    _swift_dynamicCast(puVar3,&local_58,puVar1,puVar2,8);
    if ((int)puVar3 != 0) {
      FUN_1000a0074(auStack_80,auStack_a8);
      if (param_6 != (code *)0x0) {
        FUN_10003f030(auStack_a8,local_90);
        lVar8 = *(long *)(local_90 + -8);
        (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
        puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar8 + 0x10))(puVar6);
        uVar7 = *(undefined8 *)(*(long *)(lStack_88 + 8) + 8);
        puVar3 = puVar6;
        __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(puVar6,local_90,uVar7);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = local_90;
          _swift_allocError(local_90,uVar7,0,0);
          (**(code **)(lVar8 + 0x20))(uVar7,puVar6,local_90);
        }
        else {
          (**(code **)(lVar8 + 8))(puVar6,local_90);
        }
        (*param_6)(puVar3);
        _swift_errorRelease(puVar3);
      }
      FUN_10003f094(auStack_a8);
      puVar5 = local_58;
      goto LAB_1003dfd94;
    }
    _swift_errorRelease(local_58);
  }
  if (param_6 == (code *)0x0) {
    return;
  }
  puVar4 = param_1;
  FUN_1003e25d8();
  puVar5 = (undefined8 *)&DAT_1009a8e98;
  _swift_allocError(&DAT_1009a8e98,puVar4,0,0);
  *puVar4 = param_1;
  puVar4[1] = param_2;
  *(char *)(puVar4 + 2) = (char)param_3;
  FUN_100260260(param_1,param_2,param_3);
  (*param_6)(puVar5);
LAB_1003dfd94:
  _swift_errorRelease(puVar5);
  return;
}

