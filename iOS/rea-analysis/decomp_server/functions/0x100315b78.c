// rea decompile_all
// name: FUN_100315b78
// address: 0x100315b78
// body: available
// range: 0x100315b78-0x100315d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100315b78(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  uVar5 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  sVar1 = uVar5 + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0xfe) {
    uVar9 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar7 << 3 & 0x1f)) +
            1;
    if (uVar2 >> 0x10 == 0) {
      uVar6 = 1;
      if (0xff < uVar2) {
        uVar6 = 2;
      }
      uVar9 = 0;
      if (1 < uVar2) {
        uVar9 = uVar6;
      }
    }
    else {
      uVar9 = 4;
    }
  }
  else {
    uVar9 = 1;
  }
  if (param_2 < 0xfe) {
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
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
    if (uVar9 < 2) {
      if (uVar9 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (uVar9 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}

