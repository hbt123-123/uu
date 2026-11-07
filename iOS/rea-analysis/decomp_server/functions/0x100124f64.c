// rea decompile_all
// name: FUN_100124f64
// address: 0x100124f64
// body: available
// range: 0x100124f64-0x100125293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100124f64(undefined8 *param_1,undefined4 param_2,undefined8 ***param_3,undefined *param_4,
                  ulong param_5,undefined8 ***param_6,undefined *param_7,ulong param_8)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 **local_88;
  undefined *puStack_80;
  ulong local_78;
  undefined8 *local_70;
  undefined *puStack_68;
  
  local_88 = (undefined8 **)0x0;
  puStack_80 = (undefined *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3f);
  local_70 = local_88;
  puStack_68 = puStack_80;
  __sSS6appendyySSF(0xd00000000000002d,0x800000010088e310);
  local_88 = (undefined8 **)CONCAT44(local_88._4_4_,param_2);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x203a61746164202c,0xe800000000000000);
  uVar1 = (uint)(param_5 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      local_88 = param_3;
      puStack_80 = param_4;
      FUN_1001238a4(param_3,param_4,param_5);
      param_4 = &DAT_100a75370;
      FUN_100004bb4(&DAT_100a75370,&DAT_10080e370);
LAB_100125098:
      param_3 = &local_88;
      __sSS10describingSSx_tclufC(param_3,param_4);
    }
    else {
      FUN_100008184(param_3,param_4);
      _swift_retain(param_5 & 0x3fffffffffffffff);
      pppuVar2 = param_3;
      puVar3 = param_4;
      FUN_1001232e0(param_3,param_4,param_5 & 0x3fffffffffffffff);
      if (puVar3 == (undefined *)0x0) {
        FUN_10012390c(param_3,param_4,param_5);
        param_3 = (undefined8 ***)0x0;
        param_4 = (undefined *)0xe000000000000000;
      }
      else {
        FUN_10012390c(param_3,param_4,param_5);
        param_4 = puVar3;
        param_3 = pppuVar2;
      }
    }
  }
  else {
    if (uVar4 == 2) {
      local_78 = param_5 & 0x3fffffffffffffff;
      local_88 = param_3;
      puStack_80 = param_4;
      FUN_1001238a4(param_3,param_4,param_5);
      param_4 = &DAT_1009bf9a0;
      goto LAB_100125098;
    }
    FUN_1001238a4(param_3,param_4,param_5);
  }
  __sSS6appendyySSF(param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  __sSS6appendyySSF(0x202d2d20,0xe400000000000000);
  uVar1 = (uint)(param_8 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 != 0) {
      FUN_100008184(param_6,param_7);
      _swift_retain(param_8 & 0x3fffffffffffffff);
      pppuVar2 = param_6;
      puVar3 = param_7;
      FUN_1001232e0(param_6,param_7,param_8 & 0x3fffffffffffffff);
      if (puVar3 == (undefined *)0x0) {
        FUN_10012390c(param_6,param_7,param_8);
        param_6 = (undefined8 ***)0x0;
        param_7 = (undefined *)0xe000000000000000;
      }
      else {
        FUN_10012390c(param_6,param_7,param_8);
        param_7 = puVar3;
        param_6 = pppuVar2;
      }
      goto LAB_100125248;
    }
    local_88 = param_6;
    puStack_80 = param_7;
    FUN_1001238a4(param_6,param_7,param_8);
    param_7 = &DAT_100a75370;
    FUN_100004bb4(&DAT_100a75370,&DAT_10080e370);
  }
  else {
    if (uVar4 != 2) {
      FUN_1001238a4(param_6,param_7,param_8);
      goto LAB_100125248;
    }
    local_78 = param_8 & 0x3fffffffffffffff;
    local_88 = param_6;
    puStack_80 = param_7;
    FUN_1001238a4(param_6,param_7,param_8);
    param_7 = &DAT_1009bf9a0;
  }
  param_6 = &local_88;
  __sSS10describingSSx_tclufC(param_6,param_7);
LAB_100125248:
  __sSS6appendyySSF(param_6,param_7);
  _swift_bridgeObjectRelease(param_7);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = puStack_68;
  return;
}

