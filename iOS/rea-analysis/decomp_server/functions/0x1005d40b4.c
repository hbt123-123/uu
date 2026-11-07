// rea decompile_all
// name: FUN_1005d40b4
// address: 0x1005d40b4
// body: available
// range: 0x1005d40b4-0x1005d4253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d4168 to 0x1007df4a8 _swift_storeEnumTagMultiPayload (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005d41a0) */

void FUN_1005d40b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [16];
  
  lVar4 = *(long *)(param_5 + -8);
  uVar3 = param_4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40),param_2,param_4);
  FUN_1005d2200();
  if ((uVar3 & 1) == 0) {
    FUN_1005cf5ec(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    FUN_10028cb10(param_2,param_4,0);
    (**(code **)(lVar4 + 0x20))
              (param_1,auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
    puVar2 = &DAT_100aadca8;
    FUN_100004c48(&DAT_100aadca8,&DAT_10083f250);
    uVar1 = 0;
    __ss6ResultOMa(0,param_5,puVar2,PTR___ss5ErrorWS_100995c48);
    _swift_storeEnumTagMultiPayload(param_1,uVar1,0);
    return;
  }
  *param_1 = param_2;
  puVar2 = &DAT_100aadca8;
  FUN_100004c48(&DAT_100aadca8,&DAT_10083f250);
  uVar1 = 0;
  __ss6ResultOMa(0,param_5,puVar2,PTR___ss5ErrorWS_100995c48);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}

