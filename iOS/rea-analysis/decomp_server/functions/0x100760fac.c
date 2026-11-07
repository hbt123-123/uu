// rea decompile_all
// name: SentryNetworkTracker::spanStatusForHttpResponseStatusCode:
// address: 0x100760fac
// body: available
// range: 0x100760fac-0x100761063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

unsigned_long_long
SentryNetworkTracker::spanStatusForHttpResponseStatusCode_(ID param_1,SEL param_2,long_long param_3)

{
  if (param_3 - 200 < 100) {
    return 1;
  }
  switch(param_3) {
  case 400:
    return 7;
  case 0x191:
    return 3;
  case 0x192:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
    goto switchD_100761010_caseD_190;
  case 0x193:
    return 4;
  case 0x194:
    return 5;
  case 0x199:
    return 0xf;
  default:
    switch(param_3) {
    case 500:
      return 10;
    case 0x1f5:
      return 8;
    case 0x1f6:
      break;
    case 0x1f7:
      return 9;
    case 0x1f8:
      return 2;
    default:
      if (param_3 == 0x1ad) {
        return 6;
      }
    }
switchD_100761010_caseD_190:
    return 0;
  }
}

