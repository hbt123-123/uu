// rea decompile_all
// name: FUN_100315f9c
// address: 0x100315f9c
// body: available
// range: 0x100315f9c-0x10031616f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100315f9c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar10 = *(long *)(lVar2 + -8);
  sVar5 = *(size_t *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    sVar5 = sVar5 + 1;
  }
  if (((*(uint *)(lVar10 + 0x50) & 0x1000f8) == 0) &&
     ((sVar5 + 7 & 0xfffffffffffffff8) + 0x40 < 0x19)) {
    plVar3 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      _memcpy(param_1,param_2,sVar5);
    }
    puVar4 = (undefined8 *)((long)param_1 + sVar5 + 7 & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((long)param_2 + sVar5 + 7 & 0xfffffffffffffff8);
    *puVar4 = *puVar6;
    uVar7 = puVar6[1];
    if (0xfffffffe < uVar7) {
      _swift_errorRetain(uVar7);
    }
    puVar4[1] = uVar7;
    puVar4[2] = puVar6[2];
    uVar9 = puVar6[4];
    uVar8 = puVar6[3];
    *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar6 + 5);
    puVar4[4] = uVar9;
    puVar4[3] = uVar8;
    uVar8 = puVar6[6];
    puVar4[6] = uVar8;
    uVar9 = puVar6[7];
    puVar4[7] = uVar9;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
  }
  else {
    uVar1 = *(uint *)(lVar10 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}

