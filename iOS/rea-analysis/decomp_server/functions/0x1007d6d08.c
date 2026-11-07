// rea decompile_all
// name: _TtC6Sentry32SentryDefaultCurrentDateProvider::timezoneOffset
// address: 0x1007d6d08
// body: available
// range: 0x1007d6d08-0x1007d6de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry32SentryDefaultCurrentDateProvider::timezoneOffset(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation8TimeZoneVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar4 = (long)puVar5 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation8TimeZoneV7currentACvgZ(lVar4,param_1);
  __s10Foundation4DateVACycfC(puVar5);
  puVar3 = puVar5;
  __s10Foundation8TimeZoneV14secondsFromGMT3forSiAA4DateV_tF();
  (**(code **)(lVar6 + 8))(puVar5,lVar1);
  (**(code **)(lVar7 + 8))(lVar4,lVar2);
  return (long_long)puVar3;
}

