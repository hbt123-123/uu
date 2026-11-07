// rea decompile_all
// name: FUN_1003e817c
// address: 0x1003e817c
// body: available
// range: 0x1003e817c-0x1003e82a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e817c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  FUN_1001a2c70();
  _swift_bridgeObjectRelease(lVar5);
  if ((param_3 & 1) == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1003ad730();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10 + 8));
    lVar6 = *(long *)(lVar4 + 0x38);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    puVar1 = PTR___s10Foundation4DateVMa_100996208;
    lVar7 = *(long *)(lVar5 + -8);
    (**(code **)(lVar7 + 0x20))(param_1,lVar6 + *(long *)(lVar7 + 0x48) * param_2,lVar5);
    FUN_1003e8550(param_2,lVar4,puVar1);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e8294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar5);
  return;
}

