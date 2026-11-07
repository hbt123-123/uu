// rea decompile_all
// name: FUN_10069ea48
// address: 0x10069ea48
// body: available
// range: 0x10069ea48-0x10069eb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069eb1c to 0x10069eba0 FUN_10069eba0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ea48(uint *param_1,failure *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  failure *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [56];
  undefined8 local_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 == 0) || ((int)param_1[0x1c] < 0)) {
    std::iostream_category();
    pcVar3 = "file is closed";
    lStack_28 = lVar2;
  }
  else if ((*param_1 >> 2 & 1) == 0) {
    if ((*param_1 >> 1 & 1) == 0) {
      std::iostream_category();
      pcVar3 = "can\'t resize readonly mapped file";
      lStack_28 = lVar2;
    }
    else {
      if (*(long *)(param_1 + 2) < (long)param_2) {
        _munmap(lVar2,*(undefined8 *)(param_1 + 0x1a));
        if ((int)lVar2 == 0) {
          iVar1 = _ftruncate(param_1[0x1c],(off_t)param_2);
          if (iVar1 != -1) {
            *(failure **)(param_1 + 0x1a) = param_2;
            uStack_88 = *(undefined8 *)(param_1 + 2);
            local_90 = *(undefined8 *)param_1;
            uStack_78 = *(undefined8 *)(param_1 + 6);
            uStack_80 = *(undefined8 *)(param_1 + 4);
            local_70 = *(undefined8 *)(param_1 + 8);
            FUN_10069f0c8(auStack_68,param_1 + 10);
            FUN_10069e960(param_1,&local_90);
            FUN_10069e9d0(param_1,&local_90);
            FUN_10069e5d8(&local_90);
            return;
          }
          pcVar3 = "failed resizing mapped file";
        }
        else {
          pcVar3 = "failed unmapping file";
        }
        FUN_10069eba0(param_1,pcVar3);
        return;
      }
      std::iostream_category();
      pcVar3 = "can\'t resize below mapped offset";
      unaff_x20 = param_2;
      lStack_28 = lVar2;
    }
  }
  else {
    std::iostream_category();
    pcVar3 = "can\'t resize private mapped file";
    lStack_28 = lVar2;
  }
  local_30 = 1;
  std::ios_base::failure::failure(unaff_x20,(char *)&local_90,(error_code *)pcVar3);
  FUN_1006924cc(&local_90);
  std::ios_base::failure::~failure(unaff_x20);
  return;
}

