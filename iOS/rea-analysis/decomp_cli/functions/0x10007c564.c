// rea decompile_all
// name: FUN_10007c564
// address: 0x10007c564
// body: available
// range: 0x10007c564-0x10007c6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007c6c0 to 0x1000c2cb4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007c564(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010007c61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      param_1[4] = param_2[4];
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
        _swift_release(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}

