// rea decompile_all
// name: FUN_1003dfe54
// address: 0x1003dfe54
// body: available
// range: 0x1003dfe54-0x1003e01e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003dff28) */
/* WARNING: Removing unreachable block (ram,0x0001003dff6c) */
/* WARNING: Removing unreachable block (ram,0x0001003dffac) */
/* WARNING: Removing unreachable block (ram,0x0001003dffb4) */
/* WARNING: Removing unreachable block (ram,0x0001003dffc0) */

void FUN_1003dfe54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined1 local_c0 [24];
  long local_a8;
  long lStack_a0;
  undefined1 local_98 [40];
  undefined8 *local_70 [2];
  
  local_d8 = param_9;
  lVar8 = *(long *)(param_11 + -8);
  local_d0 = param_8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar2 = 0;
    local_100 = param_5;
    local_f8 = param_12;
    local_f0 = param_6;
    local_e8 = param_7;
    local_e0 = param_4;
    __s10Foundation11JSONDecoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONDecoderCACycfc();
    FUN_100273614(lVar9,param_11,0,0,uVar2,1,param_11,param_13);
    _swift_release(uVar2);
    if (local_e0 != (code *)0x0) {
      (*local_e0)(lVar9);
    }
    (**(code **)(lVar8 + 8))(lVar9,param_11);
    return;
  }
  FUN_10026c820(0,param_10);
  puVar3 = param_1;
  FUN_1003e01e4(param_1,param_2,param_3,param_6,param_7);
  pcVar1 = local_d0;
  if (((uint)param_3 & 0xff) == 6) {
    local_70[0] = param_1;
    _swift_errorRetain(param_1);
    puVar4 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    puVar5 = &DAT_100a8ce40;
    FUN_100004bb4(&DAT_100a8ce40,&DAT_100823350);
    puVar6 = local_98;
    _swift_dynamicCast(puVar6,local_70,puVar4,puVar5,8);
    if ((int)puVar6 != 0) {
      FUN_1000a0074(local_98,local_c0);
      if (pcVar1 != (code *)0x0) {
        FUN_10003f030(local_c0,local_a8);
        lVar10 = *(long *)(local_a8 + -8);
        (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
        lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar10 + 0x10))(lVar9);
        uVar2 = *(undefined8 *)(*(long *)(lStack_a0 + 8) + 8);
        lVar8 = lVar9;
        __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar9,local_a8,uVar2);
        if (lVar8 == 0) {
          lVar8 = local_a8;
          _swift_allocError(local_a8,uVar2,0,0);
          (**(code **)(lVar10 + 0x20))(uVar2,lVar9,local_a8);
        }
        else {
          (**(code **)(lVar10 + 8))(lVar9,local_a8);
        }
        (*pcVar1)(lVar8);
        _swift_errorRelease(lVar8);
      }
      FUN_10003f094(local_c0);
      puVar7 = local_70[0];
      goto LAB_1003e01c0;
    }
    puVar3 = local_70[0];
    _swift_errorRelease();
  }
  if (pcVar1 == (code *)0x0) {
    return;
  }
  FUN_1003e25d8();
  puVar7 = (undefined8 *)&DAT_1009a8e98;
  _swift_allocError(&DAT_1009a8e98,puVar3,0,0);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  *(char *)(puVar3 + 2) = (char)param_3;
  FUN_100260260(param_1,param_2,param_3);
  (*pcVar1)(puVar7);
LAB_1003e01c0:
  _swift_errorRelease(puVar7);
  return;
}

