// rea decompile_all
// name: FUN_10004ba68
// address: 0x10004ba68
// body: available
// range: 0x10004ba68-0x10004bb5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004ba68(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  
  thunk_FUN_1001a2c34();
  if ((param_3 & 1) == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1000643b8();
    }
    lVar6 = *(long *)(lVar5 + 0x38);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    puVar1 = PTR___s10Foundation4DateVMa_100996208;
    lVar7 = *(long *)(lVar3 + -8);
    (**(code **)(lVar7 + 0x20))(param_1,lVar6 + *(long *)(lVar7 + 0x48) * param_2,lVar3);
    FUN_10006c938(param_2,lVar5,puVar1);
    *unaff_x20 = lVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010004bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,1,lVar3);
  return;
}

