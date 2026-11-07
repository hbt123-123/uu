// rea decompile_all
// name: FUN_1001c59ec
// address: 0x1001c59ec
// body: available
// range: 0x1001c59ec-0x1001c5ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c5f04 to 0x1001c9a44 FUN_1001c9a44 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001c59ec(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [16];
  undefined1 local_70 [2];
  undefined2 local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  
  uVar2 = param_2;
  uVar4 = param_3;
  uVar5 = param_3;
  FUN_1001e74f0();
  if ((uVar2 & 0xff) == 0x10) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = param_2;
    uStack_58 = param_3;
    FUN_1003fb4ec(FUN_1001c9a30,local_70,0xd000000000000095,0x8000000100885070,0xd000000000000019,
                  0x800000010089d220,0x1a,0);
    return;
  }
  uVar1 = (uint)uVar2 & 0xff;
  local_6c = (undefined4)(uVar2 >> 0x20);
  local_6e = (undefined2)(uVar2 >> 0x10);
  local_68 = uVar4;
  local_60 = uVar5;
  if (uVar1 < 6) {
    if (uVar1 == 1 || (uVar2 & 0xff) == 0) {
      if ((uVar2 & 0xff) == 0) {
        FUN_1001c61e0(param_1,uVar2 & 0xffffffffffff0000,uVar4,uVar5);
      }
      else {
        if (uVar1 != 1) goto LAB_1001c5f08;
        FUN_1001c9a90(uVar2 & 0xffffffffffff0000 | 1);
      }
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 == 3) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_70[0] = 3;
          FUN_1003fb48c(FUN_1001ca480,auStack_80,0xd000000000000095,0x8000000100885070,
                        &DAT_d000000000000013,0x800000010089d290,0xb3,0);
          if (DAT_100a73b60 != -1) {
            _swift_once(&DAT_100a73b60,FUN_1000efc4c);
          }
          FUN_1001d581c(uVar2 >> 0x20);
LAB_1001c5cd4:
          FUN_1001c9a44(uVar2,uVar4,uVar5);
          return;
        }
LAB_1001c5f08:
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_70[0] = (undefined1)uVar2;
        FUN_1003fb45c(FUN_1001c9a38,auStack_80,0xd000000000000095,0x8000000100885070,
                      0xd000000000000019,0x800000010089d220,0x32,0);
        FUN_1001c9a44(uVar2,uVar4,uVar5);
        return;
      }
      FUN_1001c9c1c(uVar2 & 0xffffffffffff0000 | 2);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 6) {
      FUN_1001ca0a0(uVar2 & 0xffffffffffff0000 | 6);
    }
    else {
      if (uVar1 != 8) goto LAB_1001c5f08;
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1001c857c,0,0xd000000000000095,0x8000000100885070,0xd000000000000024,
                    0x800000010089d260,199,0);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar6 = *(undefined8 *)(DAT_100b360a8 + 0x90);
      puVar3 = &DAT_1009a31a0;
      _swift_allocObject(&DAT_1009a31a0,0x18,7);
      _swift_weakInit(puVar3 + 0x10);
      FUN_1001ca464(uVar2,uVar4,uVar5);
      FUN_1001e36c4(uVar6,puVar3,param_1,uVar2 & 0xffffffffffff0000 | 8,uVar4,uVar5);
      FUN_1001c9a44(uVar2,uVar4,uVar5);
      _swift_release(puVar3);
    }
  }
  else if (uVar1 == 10) {
    FUN_1001c698c(param_1,uVar2 & 0xffffffffffff0000 | 10,uVar4,uVar5);
  }
  else {
    if (uVar1 != 0xd) {
      if (uVar1 == 0xf) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_70[0] = 0xf;
        FUN_1003fb48c(FUN_1001c9a60,auStack_80,0xd000000000000095,0x8000000100885070,
                      0xd000000000000014,0x800000010089d240,0x15a,0);
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        FUN_1001d5c2c(uVar2 >> 0x20);
        goto LAB_1001c5cd4;
      }
      goto LAB_1001c5f08;
    }
    FUN_1001c70b4(param_1,uVar2 & 0xffffffffffff0000 | 0xd,uVar4,uVar5);
  }
  FUN_1001c9a44(uVar2,uVar4,uVar5);
  return;
}

