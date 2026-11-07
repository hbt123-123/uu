// rea decompile_all
// name: FUN_10068b8d0
// address: 0x10068b8d0
// body: available
// range: 0x10068b8d0-0x10068bafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10068b8d0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ID IVar11;
  
  bVar1 = *(byte *)((long)param_1 + 0x31);
  cVar2 = *(char *)((long)param_2 + 0x31);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (cVar2 == '\0') {
        IVar11 = param_1[4];
        uVar7 = param_2[4];
        FUN_100681b34();
        puVar9 = param_1;
        FUN_100681b34();
        if (((ulong)param_1 & 1) == 0) {
          if (((ulong)puVar9 & 1) == 0) goto LAB_10068badc;
        }
        else if (((ulong)puVar9 & 1) != 0) {
LAB_10068badc:
          IVar11 = _objc_msgSend(IVar11,"compare:",uVar7);
          uVar10 = (uint)(IVar11 != 0xffffffffffffffff);
          goto LAB_10068bac8;
        }
      }
    }
    else if (bVar1 == 1) {
      if (cVar2 == '\x01') {
        lVar8 = param_1[2];
        if ((lVar8 != param_2[2]) || (param_1[3] != param_2[3])) {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar8,param_1[3],param_2[2],param_2[3],1);
          uVar10 = (uint)lVar8 ^ 1;
          goto LAB_10068bac8;
        }
        goto LAB_10068b9cc;
      }
    }
    else if (cVar2 == '\x02') {
      uVar10 = (*(byte *)(param_1 + 6) ^ *(byte *)(param_2 + 6)) ^ 1;
      goto LAB_10068bac8;
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      if (cVar2 == '\x03') {
        FUN_10004003c(0,&DAT_100ab9ed8,&PTR__OBJC_CLASS___NSObject_100a65960);
        puVar3 = PTR___sypN_100995e88;
        uVar6 = *param_1;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar6,PTR___sypN_100995e88 + 8);
        uVar7 = *param_2;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar7,puVar3 + 8);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,uVar7);
        uVar10 = (uint)uVar6;
        goto LAB_10068bac8;
      }
    }
    else if (cVar2 == '\x04') {
      FUN_10004003c(0,&DAT_100ab9ed8,&PTR__OBJC_CLASS___NSObject_100a65960);
      puVar5 = PTR___sypN_100995e88;
      puVar4 = PTR___sSSSHsWP_100995808;
      puVar3 = PTR___sSSN_1009957f8;
      uVar6 = param_1[1];
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (uVar6,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
      uVar7 = param_2[1];
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(uVar7,puVar3,puVar5 + 8,puVar4);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,uVar7);
      uVar10 = (uint)uVar6;
      goto LAB_10068bac8;
    }
  }
  else if (bVar1 == 5 && cVar2 == '\x05') {
LAB_10068b9cc:
    uVar10 = 1;
    goto LAB_10068bac8;
  }
  uVar10 = 0;
LAB_10068bac8:
  return uVar10 & 1;
}

