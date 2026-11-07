// rea decompile_all
// name: FUN_1002b4f34
// address: 0x1002b4f34
// body: available
// range: 0x1002b4f34-0x1002b504f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002b4f34(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar4 = param_2[1];
    if (uVar4 >> 0x3c < 0xf) {
      lVar5 = *param_2;
      FUN_100008184(lVar5,uVar4);
      *param_1 = lVar5;
      param_1[1] = uVar4;
    }
    else {
      lVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar5;
    }
    lVar6 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar2 + -8);
    lVar5 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    }
    else {
      puVar3 = &DAT_100a83428;
      FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

