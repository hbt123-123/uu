// rea decompile_all
// name: FUN_10017e924
// address: 0x10017e924
// body: available
// range: 0x10017e924-0x10017eacf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10017e924(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  long extraout_x8;
  uint uVar6;
  long unaff_x20;
  int iVar7;
  ulong self;
  long lVar8;
  undefined1 auStack_80 [16];
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [16];
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x10);
  __s10Foundation3URLV25deletingLastPathComponentACyF(auStack_60 + lVar1);
  __s10Foundation3URLV4pathSSvg();
  (**(code **)(lVar8 + 8))(auStack_60 + lVar1,lVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar3,param_2);
  _swift_bridgeObjectRelease(param_2);
  IVar4 = _objc_msgSend(self,"isWritableFileAtPath:",lVar3);
  if ((int)IVar4 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)auStack_70 + lVar1) = param_1;
    FUN_1003fb4ec(FUN_1001803c0,auStack_80 + lVar1,0xd0000000000000b1,0x8000000100896e70,
                  0x744965766f6d6572,0xef293a7461286d65,0xd9,0);
    iVar7 = 1;
    uVar6 = 5;
  }
  else {
    FUN_1000d7008(param_1);
    if ((self & 1) == 0) {
      uVar6 = 0;
      iVar7 = 0;
    }
    else {
      uVar5 = param_1;
      FUN_1001801a0();
      uVar6 = (uint)uVar5;
      iVar7 = 1;
      FUN_1001803c8(param_1,1);
    }
  }
  return uVar6 & 0xff | iVar7 << 8;
}

