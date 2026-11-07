// rea decompile_all
// name: FUN_1002ef700
// address: 0x1002ef700
// body: available
// range: 0x1002ef700-0x1002ef8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002ef700(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar5 + -8);
  uVar3 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  sVar4 = *(size_t *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  if (((uint)uVar3 < 8 && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) &&
      (sVar4 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 0x40 < 0x19
     ) {
    lVar12 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar12;
    (*(code *)**(undefined8 **)(lVar12 + -8))(param_1);
    puVar10 = (undefined8 *)((long)param_1 + 0x2fU & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + 0x2fU & 0xfffffffffffffff8);
    *puVar10 = *puVar7;
    puVar10[1] = puVar7[1];
    pcVar11 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain();
    puVar1 = puVar7 + 2;
    (*pcVar11)(puVar1,1,lVar5);
    if ((int)puVar1 == 0) {
      (**(code **)(lVar9 + 0x10))(puVar10 + 2,puVar7 + 2,lVar5);
      (**(code **)(lVar9 + 0x38))(puVar10 + 2,0,1,lVar5);
    }
    else {
      _memcpy(puVar10 + 2,puVar7 + 2,sVar4);
    }
    uVar6 = (long)puVar10 + sVar4 + 0x17 & 0xfffffffffffffff8;
    uVar3 = (long)puVar7 + sVar4 + 0x17 & 0xfffffffffffffff8;
    lVar5 = *(long *)(uVar3 + 0x18);
    *(long *)(uVar6 + 0x18) = lVar5;
    *(undefined8 *)(uVar6 + 0x20) = *(undefined8 *)(uVar3 + 0x20);
    (*(code *)**(undefined8 **)(lVar5 + -8))(uVar6,uVar3);
    *(undefined8 *)(uVar6 + 0x28) = *(undefined8 *)(uVar3 + 0x28);
    uVar8 = *(ulong *)(uVar3 + 0x30);
    _swift_bridgeObjectRetain();
    if (uVar8 < 0xffffffff) {
      uVar8 = *(ulong *)(uVar3 + 0x30);
      *(undefined8 *)(uVar6 + 0x38) = *(undefined8 *)(uVar3 + 0x38);
      *(ulong *)(uVar6 + 0x30) = uVar8;
      return param_1;
    }
    uVar2 = *(undefined8 *)(uVar3 + 0x38);
    *(ulong *)(uVar6 + 0x30) = uVar8;
    *(undefined8 *)(uVar6 + 0x38) = uVar2;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)((uint)uVar3 & 0xf8 ^ 0x1f8) & uVar3 + 0x10));
  }
  _swift_retain();
  return param_1;
}

