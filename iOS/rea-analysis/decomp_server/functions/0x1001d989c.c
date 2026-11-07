// rea decompile_all
// name: FUN_1001d989c
// address: 0x1001d989c
// body: available
// range: 0x1001d989c-0x1001d9bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001d989c(undefined8 param_1,undefined8 param_2,char param_3,long param_4,ulong param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined1 param_17)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_4 + 0x10,auStack_80,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    uVar3 = (undefined4)param_5;
    local_e8 = param_1;
    local_e0 = param_2;
    if (param_3 == '\0') {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_f0 = CONCAT44(local_f0._4_4_,uVar3);
      FUN_1003fb48c(FUN_1001e4758,&local_100,0xd000000000000095,0x8000000100889250,
                    0xd00000000000004c,0x800000010089f120,0x1b8,0);
      FUN_1001d9d5c(param_5,0);
      param_5 = param_5 & 0xffffffff;
      uVar2 = 0;
    }
    else {
      if (param_3 != '\x01') {
        local_c0 = param_14;
        local_b8 = param_15;
        local_c8 = param_13;
        local_a8 = param_11;
        local_a0 = param_12;
        local_b0 = param_10;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_e0 = CONCAT44(local_e0._4_4_,uVar3);
        FUN_1003fb48c(FUN_1001e4750,&local_f0,0xd000000000000095,0x8000000100889250,
                      0xd00000000000004c,0x800000010089f120,0x1c9,0);
        _swift_beginAccess(param_4 + _TtC14UURemoteServer15TerminalManager::sessions,auStack_98,0x21
                           ,0);
        uVar1 = param_5;
        FUN_1001de2ac(param_5,thunk_FUN_1001a2c34,thunk_FUN_10006cc48,FUN_100064e48);
        _swift_endAccess(auStack_98);
        _swift_release(uVar1);
        local_e0 = CONCAT71(local_e0._1_7_,param_17) & 0xffffffffffffff01;
        local_e8 = param_16;
        local_100 = local_b8;
        local_f8 = param_6;
        local_f0 = param_7;
        FUN_1001d64b8(param_5,0,0,param_8,param_9,local_b0,local_a8,local_a0,local_c8,local_c0);
        return;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_f0 = CONCAT44(local_f0._4_4_,uVar3);
      FUN_1003fb4ec(FUN_1001e4744,&local_100,0xd000000000000095,0x8000000100889250,
                    0xd00000000000004c,0x800000010089f120,0x1d0,0);
      FUN_1001d9d5c(param_5,1);
      param_5 = 500;
      uVar2 = 1;
    }
    (*param_6)(param_5,param_1,param_2,uVar2);
  }
  return;
}

