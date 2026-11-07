// rea decompile_all
// name: FUN_1001d7064
// address: 0x1001d7064
// body: available
// range: 0x1001d7064-0x1001d7227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined4 FUN_1001d7064(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_80 [16];
  undefined1 local_70;
  byte local_6f;
  byte local_6e;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar9 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalManager::tmuxController);
  FUN_1004061c4();
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar5 = 0;
  FUN_1000b35b4();
  bVar4 = (uVar5 & 1) == 0;
  uVar6 = 2;
  if (bVar4) {
    uVar6 = 0;
  }
  uVar7 = 0x6c5f656369766564;
  if (bVar4) {
    uVar7 = 0x6b6f;
  }
  uVar8 = 0xed000064656b636f;
  if (bVar4) {
    uVar8 = 0xe200000000000000;
  }
  uVar1 = 0x800000010089fab0;
  uVar2 = 0xd000000000000014;
  uVar3 = 4;
  if ((param_1 & 1) == 0) {
    uVar1 = uVar8;
    uVar2 = uVar7;
    uVar3 = uVar6;
  }
  uVar7 = 0x800000010089fa70;
  uVar8 = 0xd00000000000001e;
  uVar6 = 5;
  if (lVar9 != 0) {
    uVar7 = uVar1;
    uVar8 = uVar2;
    uVar6 = uVar3;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_6f = (byte)param_1 & 1;
  local_6e = (byte)uVar5 & 1;
  local_70 = lVar9 != 0;
  local_68 = uVar6;
  local_60 = uVar8;
  uStack_58 = uVar7;
  FUN_1003fb48c(FUN_1001e49b8,auStack_80,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                0x800000010089fa90,0x99,0);
  return uVar6;
}

