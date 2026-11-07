// rea decompile_all
// name: FUN_100015a44
// address: 0x100015a44
// body: available
// range: 0x100015a44-0x100015b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100015a44(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    *(char *)(param_1 + 6) = (char)param_2[6];
    lVar8 = (long)*(int *)(param_3 + 0x20);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    lVar9 = *(long *)(lVar4 + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    lVar6 = (long)param_2 + lVar8;
    (*pcVar10)(lVar6,1,lVar4);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
    }
    else {
      puVar5 = &DAT_100101b10;
      FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
      _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

