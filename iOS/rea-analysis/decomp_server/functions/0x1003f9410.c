// rea decompile_all
// name: FUN_1003f9410
// address: 0x1003f9410
// body: available
// range: 0x1003f9410-0x1003f9503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003f9410(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(int *)param_1 = (int)*param_2;
    *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
    lVar6 = (long)*(int *)(param_3 + 0x24);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar7 = *(long *)(lVar2 + -8);
    lVar4 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    }
    else {
      puVar3 = &DAT_100a76718;
      FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

