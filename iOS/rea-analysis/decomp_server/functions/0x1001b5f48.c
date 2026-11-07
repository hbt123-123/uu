// rea decompile_all
// name: FUN_1001b5f48
// address: 0x1001b5f48
// body: available
// range: 0x1001b5f48-0x1001b629b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001b6018) */

void FUN_1001b5f48(long *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  long *local_90;
  int local_68;
  byte local_64;
  
  if (((*(byte *)(unaff_x20 + 0x39) & 1) == 0) && (*(char *)(unaff_x20 + 0x38) == '\x01')) {
    if (*(char *)(unaff_x20 + 0x3a) != '\x01') {
      uVar7 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar7);
      local_90 = param_1;
      FUN_1003fb4bc(FUN_1001b9758,auStack_a0,0xd000000000000093,0x800000010089b8d0,
                    0xd00000000000001d,0x800000010089bf50,0xf9,0);
      return;
    }
    local_68 = 0;
    local_64 = 1;
    plVar4 = param_1;
    thunk_FUN_1003db354();
    plVar5 = plVar4;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = (long *)&local_68;
    (**(code **)(*plVar5 + 0x130))(FUN_1001b9764);
    _swift_release(plVar4);
    bVar3 = local_64;
    iVar2 = local_68;
    iVar1 = *(int *)(unaff_x20 + 0x1c);
    FUN_100401b14(0);
    if (((bVar3 & 1) == 0) && (iVar2 == iVar1)) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_90 = param_1;
      FUN_1003fb45c(FUN_1001b9790,auStack_a0,0xd000000000000093,0x800000010089b8d0,
                    0xd00000000000001d,0x800000010089bf50,0x111,0);
      return;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar6 = FUN_1001b9784;
    uVar7 = 0x113;
  }
  else {
    uVar7 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar7);
    pcVar6 = FUN_1001b974c;
    uVar7 = 0xf4;
  }
  local_90 = param_1;
  FUN_1003fb48c(pcVar6,auStack_a0,0xd000000000000093,0x800000010089b8d0,0xd00000000000001d,
                0x800000010089bf50,uVar7,0);
  return;
}

