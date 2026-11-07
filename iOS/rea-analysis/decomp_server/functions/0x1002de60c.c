// rea decompile_all
// name: FUN_1002de60c
// address: 0x1002de60c
// body: available
// range: 0x1002de60c-0x1002de7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002de60c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar3 = param_1;
  (**(code **)(lVar11 + 0x30))(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar11 + 8))(param_1,lVar2);
  }
  param_1 = param_1 + *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar3 + -8);
  uVar10 = (param_1 + 7U & 0xfffffffffffffff8) + (ulong)*(byte *)(lVar2 + 0x50) + 8 &
           ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar6 = uVar10;
  (**(code **)(lVar2 + 0x30))(uVar10,1,lVar3);
  if ((int)uVar6 == 0) {
    (**(code **)(lVar2 + 8))(uVar10,lVar3);
  }
  lVar3 = uVar10 + *(long *)(lVar2 + 0x40);
  if (*(int *)(lVar2 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar9 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  if ((puVar9[1] & 0x3000000000000000) == 0) {
    FUN_100006cdc(*puVar9);
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar6 = (ulong)(*(byte *)(lVar3 + 0x50) | *(byte *)(lVar2 + 0x50));
  puVar4 = (uint *)((long)puVar9 + uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  uVar6 = *(ulong *)(lVar3 + 0x40);
  if (*(ulong *)(lVar3 + 0x40) <= *(ulong *)(lVar2 + 0x40)) {
    uVar6 = *(ulong *)(lVar2 + 0x40);
  }
  bVar1 = *(byte *)((long)puVar4 + uVar6);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar6;
    uVar8 = 4;
    if (uVar5 < 4) {
      uVar8 = uVar5;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1002de7b4;
      uVar8 = (uint)(byte)*puVar4;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar4;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar4;
    }
    else {
      uVar8 = *puVar4;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1002de7b4:
  lVar11 = *(long *)(param_2 + 0x18);
  if (uVar7 != 1) {
    lVar11 = *(long *)(param_2 + 0x10);
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002de7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(puVar4,lVar11);
  return;
}

