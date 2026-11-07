// rea decompile_all
// name: FUN_1001b629c
// address: 0x1001b629c
// body: available
// range: 0x1001b629c-0x1001b647b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b629c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x20;
  uint uVar3;
  undefined1 auStack_80 [16];
  int local_60;
  byte local_5c;
  undefined1 local_41;
  
  if ((*(byte *)(unaff_x20 + 0x39) & 1) == 0) {
    uVar3 = (uint)*(byte *)(unaff_x20 + 0x38);
  }
  else {
    uVar3 = 0;
  }
  FUN_1001b94f4();
  plVar1 = param_1;
  thunk_FUN_1003db354();
  (**(code **)(*plVar1 + 0x108))(&local_60);
  _swift_release(plVar1);
  if ((((local_5c & 1) == 0) && ((uVar3 & (uint)param_1) == 1)) &&
     (local_60 == *(int *)(unaff_x20 + 0x1c))) {
    local_41 = 0;
    _swift_beginAccess(unaff_x20 + 0x10,&local_60,0x21,0);
    puVar2 = &DAT_100a77428;
    FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
    FUN_10039f3d0(&local_41,puVar2);
    _swift_endAccess(&local_60);
  }
  else {
    local_41 = 1;
    _swift_beginAccess(unaff_x20 + 0x10,&local_60,0x21,0);
    puVar2 = &DAT_100a77428;
    FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
    FUN_10039f3d0(&local_41,puVar2);
    _swift_endAccess(&local_60);
  }
  if ((uVar3 & 1) == 0) {
    FUN_1001b661c(0x1000000000000015,0x800000010089bdd0);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb48c(FUN_1001b9738,auStack_80,0xd000000000000093,0x800000010089b8d0,0xd00000000000001a,
                0x800000010089bdf0,0x17b,0);
  return;
}

