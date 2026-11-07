// rea decompile_all
// name: FUN_10005f30c
// address: 0x10005f30c
// body: available
// range: 0x10005f30c-0x10005f4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005f30c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  sVar1 = uVar4 + 1;
  uVar6 = (uint)sVar1;
  if (param_3 < 0xff) {
    uVar7 = 0;
  }
  else if (uVar6 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar6 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar6 << 3 & 0x1f)) +
            1;
    if (uVar2 >> 0x10 == 0) {
      uVar5 = 1;
      if (0xff < uVar2) {
        uVar5 = 2;
      }
      uVar7 = 0;
      if (1 < uVar2) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = 4;
    }
  }
  else {
    uVar7 = 1;
  }
  if (param_2 < 0xff) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    if (uVar6 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar8 = 1;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}

